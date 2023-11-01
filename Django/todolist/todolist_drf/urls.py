from django.urls import path
from . import views

from django.contrib.auth.views import LogoutView

# from rest_framework_simplejwt.views import (
#     TokenObtainPairView,
#     TokenRefreshView,
#     TokenVerifyView,
# )

urlpatterns = [

    path('user/login', views.LoginView.as_view(), name='login'),
    path('user/view/', views.UserView.as_view(), name='view_user'),
    path('user/logout', views.LogoutUserView.as_view(), name='logout'),

    path('users/get', views.getUserView.as_view(), name='get_all_users'),
    path('users/get/<str:pk>/', views.getSingleUserView.as_view(), name='get_single_user'),
    path('users/post', views.postUserView.as_view(), name='add_user'),
    path('users/put/<str:pk>/', views.putUserView.as_view(), name='edit_user'),
    path('users/delete/<str:pk>/',  views.deleteUserView.as_view(), name='delete_user'),

    path('todos/get', views.getTodoView.as_view(), name='get_all_todos'),
    path('todos/get/<str:pk>/', views.getSingleTodoView.as_view(), name='get_single_todo'),
    path('todos/post', views.postTodoView.as_view(), name='add_todo'),
    path('todos/put/<str:pk>/', views.putTodoView.as_view(), name='edit_todo'),
    path('todos/delete/<str:pk>/',  views.deleteTodoView.as_view(), name='delete_todo'),

    path('todos/users/<str:pk>/', views.userTodoView.as_view(), name='users_todo'),

    # path('api/token/', TokenObtainPairView.as_view(), name='token_obtain_pair'),
    # path('api/token/refresh/', TokenRefreshView.as_view(), name='token_refresh'),
    # path('api/token/verify/', TokenVerifyView.as_view(), name='token_verify'),
    # path('users/token/<str:pk>', views.get_tokens_for_user, name='get_tokens_for_user'),
    
    path('', views.taskList.as_view(), name='tasks'),
    path('task/<int:pk>/', views.taskDetail.as_view(), name='task_detail'),
    path('task_create/', views.taskCreate.as_view(), name='task_create'),
    path('task_update/<int:pk>/', views.taskUpdate.as_view(), name='task_update'),
    path('task_delete/<int:pk>/', views.taskDelete.as_view(), name='task_delete'),

    path('login', views.CustomLoginView.as_view(), name='login'),
    path('logout', LogoutView.as_view(next_page='login'), name='logout'),
    path('register', views.RegisterPage.as_view(), name='register'),
    
]