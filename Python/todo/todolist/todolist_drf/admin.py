from django.contrib import admin

# Register your models here.
from .models import UserModel

class userAdmin(admin.ModelAdmin):
    list_display = ('username', 'email', 'password')
    search_fields = ('username',)

admin.site.register(UserModel, userAdmin)