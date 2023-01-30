from django.db import models


class UserModel(models.Model):
    username = models.CharField(max_length=20)
    age = models.IntegerField()
    email = models.EmailField(max_length=50)
    password = models.CharField(max_length=10, default='123')

    def __str__(self):
        return self.user


class TodoModel(models.Model):
    todo = models.CharField(max_length=50)
    added_at = models.DateTimeField(auto_now=True)
    status = models.CharField(max_length=50, choices=(
        ('Backlog', '🔴 Backlog'),
        ('InProgress', '🟡 In Progress'),
        ('Completed', '🟢 Completed')
    ))
    user = models.ForeignKey(UserModel, on_delete=models.CASCADE)

