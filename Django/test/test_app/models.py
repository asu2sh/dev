from django.db import models

# Create your models here
class Organization(models.Model):
    name = models.CharField(max_length=100)
    
class Employee(models.Model):
    name = models.CharField(max_length=50)
    organization = models.ForeignKey(Organization, on_delete=models.DO_NOTHING)