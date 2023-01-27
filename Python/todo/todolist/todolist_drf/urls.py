from django.urls import path
from . import views

urlpatterns = [
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

    path('users/<str:pk>/todos/', views.userTodoView.as_view(), name='users_todo'),
]