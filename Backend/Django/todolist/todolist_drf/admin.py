from django.contrib import admin

# Register your models here.
from .models import UserModel, TodoModel

class userAdmin(admin.ModelAdmin):
    list_display = ('username', 'password', 'email', )
    search_fields = ('username',)

class todoAdmin(admin.ModelAdmin):
    list_display = ('todo', 'status', 'user', )

admin.site.register(UserModel, userAdmin)
admin.site.register(TodoModel, todoAdmin)