from rest_framework import serializers
from .models import UserModel, TodoModel



class todoSerializer(serializers.ModelSerializer):
    class Meta:
        model = TodoModel
        fields = '__all__'


class userSerializer(serializers.ModelSerializer):
    class Meta:
        model = UserModel
        fields = '__all__'
