from django.urls import path
from .views import (
    TaskCreateAPIView,
    TaskRetrieveAPIView,
    TaskListAPIView,
    TaskUpdateAPIView,
    TaskDestroyAPIView,
)

urlpatterns = [
    path('tasks/', TaskListAPIView.as_view(), name='task_list'),
    path('tasks/create/', TaskCreateAPIView.as_view(), name='task_create'),
    path('tasks/<int:pk>/', TaskRetrieveAPIView.as_view(), name='task_detail'),
    path('tasks/<int:pk>/update/', TaskUpdateAPIView.as_view(), name='task_update'),
    path('tasks/<int:pk>/delete/', TaskDestroyAPIView.as_view(), name='task_delete'),
]