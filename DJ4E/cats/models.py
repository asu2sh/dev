from django.db import models

class Breed(models.Model):
    name = models.CharField(max_length=32)

class Cat(models.Model):
    nickname = models.CharField(max_length=32)
    breed = models.ForeignKey('Breed', on_delete=models.CASCADE, null=False)
    age = models.IntegerField()