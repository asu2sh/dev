from rest_framework import serializers

from core.models import Currency, Category, Transaction


class CurrencySerializer(serializers.ModelSerializer):
    class Meta:
        model = Currency
        fields = ('id', 'code', 'name',)


class CategorySerializer(serializers.ModelSerializer):
    class Meta:
        model = Category
        fields = ('id', 'name',)

class WriteTransactionSerializer(serializers.ModelSerializer):

    currency = serializers.SlugRelatedField(slug_field='code', queryset=Currency.objects.all())
    category = serializers.SlugRelatedField(slug_field='name', queryset=Category.objects.all())
    
    class Meta:
        model = Transaction
        fields = ( 'amount', 'currency', 'date', 'description', 'category',)

class ReadTransactionSerializer(serializers.ModelSerializer):

    currency = CurrencySerializer()
    category = CategorySerializer()

    class Meta:
        model = Transaction
        fields = ('id', 'amount', 'currency', 'date', 'description', 'category',)
        read_only_fields = fields