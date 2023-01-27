from django.contrib import admin

from core.models import CompanyModel, EmployeeModel

# Register your models here.

class CompanyAdmin(admin.ModelAdmin):
    list_display = ('name', 'location', 'type')
    search_fields = ('name',)

class EmployeeAdmin(admin.ModelAdmin):
    list_display = ('emp_name', 'position', 'company')
    search_fields = ('emp_name',)


admin.site.register(CompanyModel, CompanyAdmin)
admin.site.register(EmployeeModel, EmployeeAdmin)