from django.contrib import admin

from .models import User, Agent, Lead, UserProfile

admin.site.register(User)
admin.site.register(Agent)
admin.site.register(Lead)
admin.site.register(UserProfile)
