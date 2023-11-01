from rest_framework import serializers
from core.models import CompanyModel, EmployeeModel


class CompanySerializer(serializers.HyperlinkedModelSerializer):
    class Meta:
        model = CompanyModel
        fields = '__all__'

class EmployeeSerializer(serializers.HyperlinkedModelSerializer):
    id = serializers.ReadOnlyField()
    class Meta:
        model = EmployeeModel
        fields = '__all__'