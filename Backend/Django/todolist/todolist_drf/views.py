from rest_framework.views import APIView

from rest_framework.response import Response
# from django.http import JsonResponse

from .models import UserModel, TodoModel
from .serializers import userSerializer, todoSerializer

from django.urls import reverse_lazy
from django.views.generic import ListView, DetailView, CreateView, UpdateView, DeleteView, FormView
from django.contrib.auth.views import LoginView

from django.contrib.auth.mixins import LoginRequiredMixin
from django.contrib.auth.forms import UserCreationForm
from django.contrib.auth import login

# from rest_framework.permissions import IsAuthenticated, IsAdminUser
# from rest_framework_simplejwt.authentication import JWTAuthentication
# from rest_framework_simplejwt.tokens import RefreshToken

from rest_framework.exceptions import AuthenticationFailed
import jwt, datetime


# def get_tokens_for_user(request, pk):
#     user = UserModel.objects.get(id=pk)
#     refresh = RefreshToken.for_user(user)
#     token = {
#         'username': user.email,
#         'refresh': str(refresh),
#         'access': str(refresh.access_token),
#     }
#     return JsonResponse(token)


# REST Views
class LoginView(APIView):
    
    def post(self, request):
        email = request.data['email']
        password = request.data['password'] 

        user = UserModel.objects.filter(email=email).first()

        if user is None:
            raise AuthenticationFailed('User Not Found!')
        
        if not user.check_password(password):
            raise AuthenticationFailed('Incorrect Password!')
        
        payload = {
            'id': user.id,
            'exp': datetime.datetime.utcnow() + datetime.timedelta(minutes=60),
            'iat': datetime.datetime.utcnow()
        }

        token = jwt.encode(payload, 'secret', algorithm='HS256')

        response = Response()
        response.set_cookie(key='jwt', value=token, httponly=True)
        response.data = {
            'jwt': token
        }
        return response


class UserView(APIView):

    def get(self, request):
        token = request.COOKIES.get('jwt')

        if not token:
            raise AuthenticationFailed('Unauthenticated User!')

        try:
            payload = jwt.decode(token, 'secret', algorithms=['HS256'])

        except jwt.ExpiredSignatureError:
            raise AuthenticationFailed('Unauthenticated!')
        
        user = UserModel.objects.filter(id=payload['id']).first()
        serializer = userSerializer(user)

        return Response(serializer.data)

class LogoutUserView(APIView):

    def post(self, request):
        response = Response()
        response.delete_cookie('jwt')
        response.data = {
            'message': 'Logout Successful'
        }
        return response


class getUserView(APIView):

    def get(self, request):
        users = UserModel.objects.all()
        serializer = userSerializer(users, many=True)
        return Response(serializer.data)


class getSingleUserView(APIView):

    def get(self, request, pk):

        user = UserModel.objects.get(id=pk)
        serializer = userSerializer(user, many=False)
        return Response(serializer.data)


class postUserView(APIView):
    
    def post(self, request):
        serailizer = userSerializer(data=request.data)
        serailizer.is_valid(raise_exception=True)
        serailizer.save()
        return Response(serailizer.data)


class putUserView(APIView):
    
    def put(self, request, pk):
        user = UserModel.objects.get(id=pk)
        serializer = userSerializer(instance=user, data=request.data)

        if serializer.is_valid():
            serializer.save()
        return Response(serializer.data)


class deleteUserView(APIView):
    
    def delete(self, request, pk):
        user = UserModel.objects.get(id=pk)
        user.delete()
        return Response('User Deleted Successfully.')


class getTodoView(APIView):

    def get(self, request):
        todos = TodoModel.objects.all()
        serializer = todoSerializer(todos, many=True)
        return Response(serializer.data)

class getSingleTodoView(APIView):

    def get(self, request, pk):
        todo = TodoModel.objects.get(id=pk)
        serializer = todoSerializer(todo, many=False)
        return Response(serializer.data)

class postTodoView(APIView):
        
    def post(self, request):
        serailizer = todoSerializer(data=request.data)

        if serailizer.is_valid():
            serailizer.save()
        return Response(serailizer.data)


class putTodoView(APIView):

    def put(self, request, pk):
        user = TodoModel.objects.get(id=pk)
        serializer = todoSerializer(instance=user, data=request.data)

        if serializer.is_valid():
            serializer.save()
        return Response(serializer.data)


class deleteTodoView(APIView):

    def delete(self, request, pk):
        todo = TodoModel.objects.get(id=pk)
        todo.delete()
        return Response('Todo Deleted Successfully.')


class userTodoView(APIView):

    def get(self, request, pk):
        todo = TodoModel.objects.filter(user=pk)
        serializer = todoSerializer(todo, many=True)
        return Response(serializer.data)



# Template Views

class taskList(LoginRequiredMixin, ListView):
    model = TodoModel
    context_object_name = 'taskList'

    # def get_context_data(self, **kwargs):
    #     context = super().get_context_data(**kwargs)
    #     context['taskList'] = context['taskList'].filter(user=self.request.user)
    #     return context

class taskDetail(LoginRequiredMixin, DetailView):
    model = TodoModel
    context_object_name = 'taskDetail'

class taskCreate(LoginRequiredMixin, CreateView):
    model = TodoModel
    fields = '__all__'
    success_url = reverse_lazy('tasks')

class taskUpdate(LoginRequiredMixin, UpdateView):
    model = TodoModel
    fields = '__all__'
    success_url = reverse_lazy('tasks')

class taskDelete(LoginRequiredMixin, DeleteView):
    model = TodoModel
    context_object_name = 'task'
    success_url = reverse_lazy('tasks')



class CustomLoginView(LoginView):
    template_name = 'todolist_drf/login.html'
    fields = '__all__'
    redirect_authenticated_user = True
    
    def get_success_url(self):
        return reverse_lazy('tasks')



class RegisterPage(FormView):
    template_name = 'todolist_drf/register.html'
    form_class = UserCreationForm
    redirect_authenticated_user = True
    success_url = reverse_lazy('tasks')

    def form_valid(self, form):
        user = form.save()
        if user is not None:
            login(self.request, user)
        return super(RegisterPage, self).form_valid(form)