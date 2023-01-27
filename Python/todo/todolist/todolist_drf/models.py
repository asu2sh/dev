from django.db import models


class UserModel(models.Model):
    user_name = models.CharField(max_length=20)
    user_email = models.EmailField(max_length=50)
    user_age = models.IntegerField()

    def __str__(self):
        return self.user_name


class TodoModel(models.Model):
    todo = models.CharField(max_length=50)
    added_at = models.DateTimeField(auto_now=True)
    status = models.CharField(max_length=50, choices=(
        ('Backlog', '🔴 Backlog'),
        ('InProgress', '🟡 In Progress'),
        ('Completed', '🟢 Completed')
    ))
    user = models.ForeignKey(UserModel, on_delete=models.CASCADE)

