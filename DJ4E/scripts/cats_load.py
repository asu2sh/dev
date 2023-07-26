### Loading Data From A File

# Sometimes we need to pre-load data into our Django Database
# This Data might come from an API or file
# We need Python program to function like the Django Shell

import csv  # https://docs.python.org/3/library/csv.html
from cats.models import Cat, Breed

# https://django-extensions.readthedocs.io/en/latest/runscript.html
# python manage.py runscript cats_load

def run():
    fhand = open('cats/meow.csv')
    reader = csv.reader(fhand)
    next(reader)    # Advance past the header

    Cat.objects.all().delete()
    Breed.objects.all().delete()

    # Name,Breed,Age
    # Abby,Sphinx,5
    # Annie,Burmese,7
    # Ash,Manx,9

    for row in reader:
        print(row)

        b, created = Breed.objects.get_or_create(name=row[1])
        
        c = Cat(nickname=row[0], breed=b, age=row[2])
        c.save()