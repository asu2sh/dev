from rest_framework.views import APIView

from rest_framework.response import Response

from .models import UserModel, TodoModel
from .serializers import userSerializer, todoSerializer

from rest_framework.permissions import IsAuthenticated
from rest_framework_simplejwt.authentication import JWTAuthentication


class getUserView(APIView):

    authentication_classes = [JWTAuthentication]
    permission_classes = [IsAuthenticated]

    def get(self, request):
        users = UserModel.objects.all()
        serializer = userSerializer(users, many=True)
        return Response(serializer.data)

class getSingleUserView(APIView):

    authentication_classes = [JWTAuthentication]
    permission_classes = [IsAuthenticated]

    def get(self, request, pk):
        user = UserModel.objects.get(id=pk)
        serializer = userSerializer(user, many=False)
        return Response(serializer.data)

class postUserView(APIView):

    authentication_classes = [JWTAuthentication]
    permission_classes = [IsAuthenticated]
    
    def post(self, request):
        serailizer = userSerializer(data=request.data)

        if serailizer.is_valid():
            serailizer.save()
        return Response(serailizer.data)

class putUserView(APIView):

    authentication_classes = [JWTAuthentication]
    permission_classes = [IsAuthenticated]
    
    def put(self, request, pk):
        user = UserModel.objects.get(id=pk)
        serializer = userSerializer(instance=user, data=request.data)

        if serializer.is_valid():
            serializer.save()
        return Response(serializer.data)

class deleteUserView(APIView):

    authentication_classes = [JWTAuthentication]
    permission_classes = [IsAuthenticated]
    
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

    authentication_classes = [JWTAuthentication]
    permission_classes = [IsAuthenticated]

    def get(self, request, pk):
        todo = TodoModel.objects.filter(user=pk)
        serializer = todoSerializer(todo, many=True)
        return Response(serializer.data)