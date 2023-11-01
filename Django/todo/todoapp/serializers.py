from rest_framework import serializers
from .models import Task

class TaskSerializer(serializers.ModelSerializer):
    class Meta:
        model = Task
        fields = '__all__'

    def clean(self, validated_data):
        if 'due_date' in validated_data and 'timestamp' in validated_data:
            if validated_data['due_date'] < validated_data['timestamp']:
                raise serializers.ValidationError("Due Date cannot be before Timestamp created.")
        return validated_data

