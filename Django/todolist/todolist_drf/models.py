from django.db import models
from django.contrib.auth.models import AbstractUser


class UserModel(AbstractUser):
    username = models.CharField(max_length=20)
    password = models.CharField(max_length=100)
    email = models.EmailField(max_length=50, unique=True)

    USERNAME_FIELD = 'email'
    REQUIRED_FIELDS = ['username', ] 

    def __str__(self):
        return self.username


class TodoModel(models.Model):
    todo = models.CharField(max_length=50)
    added_at = models.DateTimeField(auto_now=True)
    status = models.CharField(max_length=50, choices=(
        ('Backlog', '🔴 Backlog'),
        ('InProgress', '🟡 In Progress'),
        ('Completed', '🟢 Completed')
    ))
    user = models.ForeignKey(UserModel, on_delete=models.CASCADE)

    def __str__(self):
        return self.todo

