from django.db import models

# Creating company Model
class CompanyModel(models.Model):
    company_id = models.AutoField(primary_key=True)
    name = models.CharField(max_length=50)
    location = models.CharField(max_length=50)
    about = models.TextField()
    type = models.CharField(max_length=100, choices=(
        ('IT', 'IT'),
        ('Core', 'Core'),
        ('Electronics', 'ECE')
    ))
    added_date = models.DateTimeField(auto_now=True)
    active = models.BooleanField(default=True)

    def __str__(self):
        return self.name

# Creating employee model
class EmployeeModel(models.Model):
    emp_id = models.AutoField(primary_key=True)
    emp_name = models.CharField(max_length=50)
    emp_email = models.CharField(max_length=50)
    emp_age = models.IntegerField()
    about = models.TextField()
    position = models.CharField(max_length=20, choices= (
        ('Full Time Employee', 'FTE'), 
        ('Trainee', 'Trainee'), 
        ('Intern', 'Intern')
    ))
    company = models.ForeignKey(CompanyModel, on_delete=models.CASCADE)

    def __str__(self):
        return self.emp_name


