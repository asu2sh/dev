from django.contrib import admin
from .models import Task, Tag

class TaskAdmin(admin.ModelAdmin):
    readonly_fields = ('timestamp',)
    list_display = ('title', 'due_date', 'status')
    list_filter = ('status',)
    fieldsets = (
        ('General', {
            'fields': ('title', 'description', 'due_date', 'status')
        }),
        ('Tags', {
            'fields': ('tags',)
        }),
    )

admin.site.register(Task, TaskAdmin)
admin.site.register(Tag)
