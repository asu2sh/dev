from django.shortcuts import render

from core.models import CompanyModel, EmployeeModel
from core.serializers import CompanySerializer, EmployeeSerializer
from rest_framework import viewsets
from rest_framework.decorators import action
from rest_framework.response import Response


class CompanyViewSet(viewsets.ModelViewSet):
    queryset = CompanyModel.objects.all()
    serializer_class = CompanySerializer

    @action(detail=True,methods=['get'])
    def employees(self,request,pk=None):
        try:
            comp = CompanyModel.objects.get(pk=pk)
            emps = EmployeeModel.objects.filter(company=comp)
            emp_serializer = EmployeeSerializer(emps, many=True,context={'request':request})
            return Response(emp_serializer.data)
        except Exception as e:
            return Response({
                'message': 'Company Does not Exists'
            })

class EmployeeViewSet(viewsets.ModelViewSet):
    queryset = EmployeeModel.objects.all()
    serializer_class = EmployeeSerializer

