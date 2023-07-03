
def outer_function():
    num = 20

    def inner_function():
        global num
        num = 30
    
    print("Before calling inner_function(): ", num)
    inner_function()
    print("After calling inner_function(): ", num)

outer_function()
print("Outside both function: ", num)


import random

print(random.randrange(-10, 20))

list1 = ['a', 'b', 'c', 'd', 'e']

# get random item from list1
print(random.choice(list1))

# Shuffle list1
random.shuffle(list1)

# Print the shuffled list1
print(list1)

# Print random element
print(random.random())

print(list1[-5])

# slicing in python
# start index is inclusive, end index is exclusive
print(list1[-5:-1])

# append
list1.append(1)
print(list1)

# extend
list2 = [2, 3, 4, 5]
list1.extend(list2)
print(list1)

# del
# start index is inclusive, end index is exclusive
del list1[4: 7]
print(list1)

# remove
list1.remove(4)
print(list1)

print(4 in list1)
print('a' in list1)

print(len(list1))

# List Comprehension
numbers = [x*x for x in range(1, 5)]
print(numbers)

evenOdd = ['Even' if x%2==0 else 'Odd' for x in range(2,7)]
print(evenOdd)


# list fns
list3 = ['Python', 'C++', 'C', 'C#']
list3.append('JavaScript')
print(list3)
list3.insert(1, 'Go')
print(list3)

# tuples
list4 = 'Go', 'Goa', 'Gone'
# we can create tuples without using ()
print(list4)

# create a tuple with only one element
list5 = 'Python',
# if we don't add commas it will be considered as string
print(list5)

# Set
list6 = {'Py', 65, 2.0, 65}
# set has no particular order, no duplicates
print(list6)
# create an empty set
empty_set = set()
print(empty_set)

# create an empty dictionary
empty_dictionary = { }
print(empty_dictionary)

# add elements to set
list6.add('Charm')
print(list6)

# update
list7 = ['Py', 'Charm', 69]
list6.update(list7)
print(list6)

# remove
list6.discard(65)
print(list6)

# Dictionary
student_id = {
    101: 'Ashutosh',
    102: 'Abhishek',
    103: 'Saddam',
}
print(student_id)
del student_id[103]
print(student_id.keys())

# file i/o
# try:
#     # open
#     file1 = open("c:\dev\Python\\test.txt")
#     # read
#     content = file1.read()
#     print(content)
# finally:
#     # close
#     file1.close()

# # with...open
# with open('c:\dev\Python\\test.txt') as file2:
#     content = file2.read(5)
#     print(content)
# # using with...open we don't have to close the file

# # write
# with open('c:\dev\Python\\test2.txt', 'w+') as file3:
#     file3.write('Hell world')

import os
# get cwd
print(os.getcwd())

# change cwd
# os.chdir('c:\dev\Python\Py')

# list dir
print(os.listdir())

# create dir
# os.mkdir('testPy')

# to remove a non-empty dir
# import shutil
# shutil.rmtree('dirname')

# list all the built-in exceptions
# print(dir(locals()['__builtins__']))


# define Python user-defined exceptions
# class InvalidAgeException(Exception):
#     "Raised when the input value is less than 18"
#     pass

# # you need to guess this number
# number = 18

# try:
#     input_num = int(input("Enter a number: "))
#     if input_num < number:
#         raise InvalidAgeException
#     else:
#         print("Eligible to Vote")
        
# except InvalidAgeException:
#     print("Exception occurred: Invalid Age")


class Parrot:
    name = ''
    age = 0

parrot1 = Parrot()
parrot1.name = "Blu"
parrot1.age = 10

parrot2 = Parrot()
parrot2.name = "WOO"
parrot2.age = parrot1.age

print(parrot1.name, parrot1.age)
print(parrot2.name, parrot2.age)


class Animal:
    def eat(self):
        print("I eat!")
    def sleep(self):
        print("I sleep!")

class Dog(Animal):
    def bark(self):
        print("WOOF WOOF!")

dog1 = Dog()
dog1.bark()
dog1.sleep()


class Computer:
    def __init__(self):
        self.__maxprice = 1000

    def sell(self):
        print("Selling Price: {}    buying?".format(self.__maxprice))
    
    def setMaxPrice(self, price):
        self.__maxprice = price

dell = Computer()
dell.sell()

dell.__maxprice = 999
dell.sell()

dell.setMaxPrice(969)
dell.sell()


class Polygon:
    def render(self):
        print('Rendering Polygon...')

class Square(Polygon):
    def render(self):
        print('Rendering Square...')

class Circle(Polygon):
    # def render(self):
    #     print('Rendering Circle...')
    pass

obj1 = Square()
obj1.render()

obj2 = Circle()
obj2.render()


class Bike:
    def __init__(self, name, speed):
        self.name = name
        self.speed = speed
    def details(self):
        print('Name: {}, Speed: {}'.format(self.name, self.speed))

bike1 = Bike('Yamaha R1', 350)
bike2 = Bike('Kawasaki H2', 400)
bike1.details()
bike2.details()


class Poly:
    def __init__(self, no_of_sides):
        self.n = no_of_sides
        self.sides = [0 for i in range(no_of_sides)]

    def inputSides(self):
        self.sides = [float(input('Enter side '+str(i+1)+' : ')) for i in range(self.n)]
    
    def dispSides(self):
        for i in range(self.n):
            print('Side', i+1, 'is', self.sides[i])

class Triangle(Poly):
    def __init__(self):
        Poly.__init__(self, 3)

    def findArea(self):
        a, b, c = self.sides
        s = (a+b+c)/2
        area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
        print('Area of Triangle is %0.2f' %area)

t = Triangle()
# t.inputSides()
# t.dispSides()
# t.findArea()


class Point:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def __str__(self):
        return "({0}, {1})".format(self.x, self.y)
    
    def __add__(self, other):
        x = self.x + other.x
        y = self.y + other.y
        return Point(x, y)
    
p1 = Point(1, 3)
p2 = Point(2, 4)

print(p1+p2)
print(p1.__add__(p2))


class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __gt__(self, other):
        return self.age > other.age
    
person1 = Person('asu', 24)
person2 = Person('zero', 23)

print(person1 > person2)
print(person1 < person2)


#! Iterator
# __iter()__ & __next() are collectively called iterator protocol.

my_list = [1, 3, 5, 7, 11]
iterator = iter(my_list)
print(next(iterator))
print(next(iterator))

# we will get StopIteration exception at last.

for i in iterator:
    print(i, end=' ')
# process continues until the iterator is exhausted.


class PowTwo:
    def __init__(self, max=0):
        self.max = max

    def __iter__(self):
        self.n = 0
        return self
    
    def __next__(self):
        if self.n <= self.max:
            res = 2 ** self.n
            self.n += 1
            return res
        else:
            raise StopIteration

# print('')
for y in PowTwo(1):
    print(y)

numbers = PowTwo(3)
pt = iter(numbers)
for x in pt:
    print(x)

# Infinite Iterators:
from itertools import count

infinite_iterator = count(1)

for i in range(3):
    print(i,":",next(infinite_iterator))

#! Generator
# a generator is a function that returns an iterator -
# that produces a sequence of values when iterated over.

# yield is used to produce value from generator 
# yield instead of return is the difference b/w fn & generator

# When the generator function is called, it doesn't
# execute the fn body immediately. Instead, it returns 
# a generator object that can be 
# iterated over to produce the values.

def my_generator(n):
    value = 0
    while value < n:
        yield value
        value += 1

for value in my_generator(3):
    print(value)

generator = my_generator(3)
print(next(generator))
print(next(generator))


#* Generator Expression
# Syntax: (expression for item in iterable)

squares_generator = (i*i for i in range(5))

for i in squares_generator:
    print(i)

#? We can only iterate over once since generators -
#? can only be used once.

def PowTwoGen(max=0):
    n = 0
    while n < max:
        yield 2 ** n
        n += 1

for i in PowTwoGen(3):
    print(i)

# since generators produce only one item at a time,
# they can represent an infinite stream of data.

# Pipelining Generators
def fibonacci_numbers(nums):
    x, y = 0, 1
    for _ in range(nums):
        x, y = y, x+y
        yield x

# The '_' variable name is used to indicate that, the
# loop variable isn't actually used in the loop body.

# y = y+x
# x = y-x

def square(nums):
    for num in nums:
        yield num ** 2

print(sum(square(fibonacci_numbers(10))))

#* A function with yield instead of return,
#* when called returns a Generator

# Controlling a Generator Exhaustion
class Bank():
    crisis = False
    def create_atm(self):
        while not self.crisis:
            yield "$100"

sbi = Bank()
corner_street_atm = sbi.create_atm()
print(corner_street_atm.__next__())
print([corner_street_atm.__next__() for cash in range(5)])

sbi.crisis = True   # crisis is coming, no more money
# print(corner_street_atm.__next__())

wall_street_atm = sbi.create_atm()
# print(wall_street_atm.__next__())   # It's even true for new ATMs

sbi.crisis = False
# print(corner_street_atm.__next__()) # Even post-crisis ATMs remain empty
# print(wall_street_atm.__next__())

brand_new_atm = sbi.create_atm()
# print(brand_new_atm.__next__()) # Build new ATM to get back in buisness
# this is generator exhaustion, when the function runs off.


# Reversing a string
greet = 'HeLlO WoRlD'
reversed_greet = greet[::-1]
print(reversed_greet)

# Check if a string contains a substring
substring_greet = 'HeLlo'
if substring_greet in greet:
    print(True)
else:
    print(False)

# Find the maximum value in the list
the_list = [1, 4, 9, 3, 0, 4, 2, 1]
max_val = max(the_list)
print(max_val)

# Find the index of max value in the list
idx_max_val = the_list.index(max_val)
print(idx_max_val)

# Removing duplicates from the list
new_list = list(set(the_list))
print(new_list)

# Check if list is empty
empty_list = []
if not empty_list:
    print('List is empty')

# Counting occurences of an item
item = 4
no_of_occurence = the_list.count(item)
print(no_of_occurence)

# Check if all item in the list is unique
if len(the_list) == len(set(the_list)):
    print('All items are unique')
else:
    print('Not Unique!')

# Removing all occurences of an item from the list
list_item = [x for x in the_list if x != item]
print(list_item)

# Flattening a nested list
nested_list = [[1, 3], [5, 7]]
flattened_list = [x for y in nested_list for x in y]
print(flattened_list)

# Remove all whitespaces from a string
white_string = '    Hell o   World  '
rm_ws_string = ''.join(white_string.split())
print(rm_ws_string)

# Remove duplicates from a string
rm_duplicate = ''.join(set(white_string))
print(rm_duplicate)

# Count no. of words in a string
word_cnt = len(white_string.split())
print(word_cnt)

# Generate a random integer
import random
random_int = random.randint(1, 6)
print(random_int)

# Merging two dictionaries
dict1 = {'apple': 3, 'banana': 4}
dict2 = {'orange': 1, 'mango': 2}

merged_list = [*dict1, *dict2]
print(merged_list)

merged_set = {*dict1, *dict2}
print(merged_set)

merged_dict = {**dict1, **dict2}
print(merged_dict)


#! Sorting a dictionary
my_dict = {
    'apple': 4,
    'grape': 5,
    'watermelon': 1,
    'mango': 2,
    'litchi': 3,
}
print(my_dict.values())
print(my_dict.keys())
print(my_dict.items())

# Sorting by key
key_dict = dict(sorted(my_dict.items()))
print(key_dict)

# Sorting by value
val_dict = dict(sorted(my_dict.items(), key=lambda item: item[1]))
print(val_dict)

val_dict_comp = {key: value for key, value in sorted(my_dict.items(), key=lambda item: item[1])}
print(val_dict_comp)


#! Closure
# Python closure is a nested function that allows us to access - 
# outer function's variables even after outer function is closed.

def outerFunction():
    name = 'Ashutosh'
    return lambda: 'Hi ' + name

message = outerFunction()
print(message())


def outer_function():
    num = 1
    def inner_function():
        nonlocal num
        num += 2
        return num
    return inner_function

odd = outer_function()
print(odd())
print(odd())
print(odd())

odd2 = outer_function()
print(odd2())
print(odd2.__closure__)


#! Decorators
# a python decorator is a fn, that takes in a fn &
# returns it by adding some functionality.

def make_pretty(func):
    def inner():
        print('Decorated :)')
        func()
    return inner

# def ordinary():
#     print('Ordinary :(')

# decorated_func = make_pretty(ordinary)
# decorated_func()

#           |||

@make_pretty
def ordinary():
    print('Ordinary :(')

ordinary()


def smart_divide(func):
    def inner(a, b):
        print('I am going to divide', a, 'and', b)
        if b == 0:
            print('Whoops!, Cannot Divide.')
            return
        return func(a, b)
    return inner

@smart_divide
def divide(a, b):
    return a/b

divide(2, 0)


def star(func):
    def inner(*args, **kwargs):
        print('*' * 15)
        func(*args, **kwargs)
        print('*' * 15)
    return inner

def percent(func):
    def inner(*args, **kwargs):
        print('%' * 15)
        func(*args, **kwargs)
        print('%' * 15)
    return inner

@star
@percent
def printer(msg):
    print(msg)

printer('HellBoy')


#! @property Decorator
# a pythonic way to use getters and setters in OOPs

class Celsius1:
    def __init__(self, temperature=0):
        self.temperature = temperature

    def to_fahrenheit(self):
        return (self.temperature * 1.8) + 32

human = Celsius1()
human.temperature = 37

print(human.temperature)
print(human.to_fahrenheit())


class Celsius2:
    def __init__(self, temperature=0):
        self.set_temperature(temperature)

    def to_fahrenheit(self):
        return (self.get_temperature() * 1.8) + 32
    
    # getter
    def get_temperature(self):
        return self._temperature

    # setter
    def set_temperature(self, value):
        if value < -273.15:
            raise ValueError('Invalid Temperature')
        self._temperature = value


human = Celsius2(37)

print(human.get_temperature())
print(human.to_fahrenheit())

# human.set_temperature(-300)
# print(human.to_fahrenheit())


class Celsius3:
    def __init__(self, temperature=0):
        self.temperature = temperature

    def to_fahrenheit(self):
        return (self.temperature * 1.8) + 32
    
    def get_temperature(self):
        print('Getting Value...')
        return self._temperature

    def set_temperature(self, value):
        print('Setting Value...')
        if value < -273.15:
            raise ValueError('Invalid Temperature')
        self._temperature = value

    temperature = property(get_temperature, set_temperature)

# The actual temperature value is stored in the private
# _temperature variable. The temperature attribute is a
# property object which provides an interface to this private variable.

human = Celsius3(37)
print(human.temperature)
print(human.to_fahrenheit())
print('')

class Celsius:
    def __init__(self, temperature=0):
        self.temperature = temperature

    def to_fahrenheit(self):
        return (self.temperature * 1.8) + 32
    
    @property
    def temperature(self):
        print('Setting Value...')
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        print('Getting Value...')
        if value < -273.15:
            raise ValueError('Invalid Temperature!')
        self._temperature = value

human = Celsius(37)
print(human.temperature)
print(human.to_fahrenheit())


#! RegEx
# i.e. Regular Expression
# is a sequence of characters that defines a search pattern.
# e.g. ^a...s$

import re

pattern = '^a...s$'
test_string = 'abyss'

result = re.match(pattern, test_string)

if result:
    print('Match Found!')
else:
    print('No Match!')

#* MetaCharcters
# Metacharacters are characters that are interpreted in a
# special way by RegEx engine.
# $ ^ * () + [] {} \ | . ?

#? [] - Square brackets
# Specifies a set of characters you wish to match.
# [abc] - abc de ca - 5 matches
# [a-e] is the same as [abcde]
# [^0-9] means any non-digit character

#? . - Period
# A period any single character(except '\n')
# .. - abc - 1 match
# .. - abcd - 2 match

#? ^ - Caret
# Used to check if a string starts with a certain character
# ^a - abc - 1 match
# ^a - bca - 0 match

#? $ - Dollar
# Used to check if a string ends with a certain character
# a$ - abc - 0 match
# a$ - bca - 1 match

#? * - Star
# Matches zero or more occurences of the pattern left to it.
# ma*n - mn - 1 match
# ma*n - maaan - 1 match
# ma*n - main - 0 match

#? + - Plus
# Matches one or more occurences of the pattern left to it.
# ma+n - mn - 0 match
# ma+n - maaan - 1 match
# ma+n - main - 0 match

#? ? - Question Mark
# Matches zero or one occurence pattern left to it.
# ma?n - mn - 1 match
# ma?n - maaan - 0 match
# ma?n - main - 1 match

#? {} - Braces
# {n, m} means at least n, and at most m repetitions of
# the pattern left to it.
# a{2, 3} - abc dat - 0 match
# a{2, 3} - abc daat - 1 match
# a{2, 3} - aabc daat - 2 match

#? | - Alternation
# a|b - cde - No match
# a|b - ade - 1 match

#? () - Group
# Parentheses () is used to group sub-patterns.
# (a|b|c)xz match any string that matches
# either a or b or c followed by xz

#? \ - Backslash
# Used to esacape various characters including all metacharacters.
# \$a match if a string contains $ followed by a. Here $, 
# is not interpreted by a RegEx engine.
#* Special Sequences:
# makes easier to write commonly used patterns.
#* \A 
# Matches if the specified characters are at the 
# start of a string.
# \Athe - the sun - match
# \Athe - In the sun - NO match

#* \b
# Matches if the specified characters are at the
# beginning or end of the word.
# \bfoo - football - match
# \bfoo - afootball - NO match
# foo\b - kungfoo - match
#* \B
# opposite of \b

#* \d
# Matches any decimal digit.
# Equivalent to [0-9]
#* \D
# opposite to \d

#* \s 
# Matches where a string contains any 
# whitespace character.
# Equivalent to [ \t\n\r\f\v]
# \s - Python RegEx - 1 match
# \s - PythonRegEx - NO match
#* \S
# opposite of \s
# Equivalent to [^ \t\n\r\f\v]

#* \w
# Matches any alphanumeric character.
# Equivalent to [a-zA-Z0-9_]
# \w - 6&"_:"c - 3 matches
# \w - %>! - NO match
#* \W
# opposite of \w

#* \Z
# Matches if the specified characters
# are at the end of a string.
# Python\Z - I like Python - 1 match
# Python\Z - Python is fun - NO match


#! Python RegEx

#? re.findall()
# returns a list of strings containing all the matches.
# else an empty list.

string = 'hello 13 hi 69, '
pattern = '\d+'

result = re.findall(pattern, string)
print(result)

#? re.split()
# Splits the string where there is a match, and
# returns a list of strings where the splits have occurred.
# return list containing original string if pattern not found.

string = 'Thirteen:13 Sixty nine:69.'
pattern = '\d+'

result = re.split(pattern, string)
print(result)
result = re.split(pattern, string, maxsplit=1)
print(result)

#? re.sub()
# Returns a string where matched occurences are 
# replaced with a content of replace variable.

string = 'abc 13\de 23\n f45'
pattern = '\s+'
replace = 'XXX'

result = re.sub(pattern, replace, string)
print(result)

#? re.subn()
# similar to re.sub() except it return a tuple
# containing the new string and the no. of substitutions

string = 'abc 13\de 23\n f45'
pattern = '\s+'
replace = 'XXX'

result = re.subn(pattern, replace, string)
print(result)

#? re.search()
# Looks for the first location where the RegEx pattern
# produces a match with a string.
# returns a match object; if not, returns None.

string = 'Python is Fun!'

match = re.search('\APython', string)

if match:
    print('Pattern found inside the string.')
else:
    print('Pattern Not Found!')


#* Match Object
#? match.group()
# returns the part of the string where there is a match.

string = '39801 356, 2102 1111'
pattern = '(\d{3}) (\d{2})'

match = re.search(pattern, string)

if match:
    print(match.group())
else:
    print('Pattern Not Found!')


#! Python DateTime
import datetime

now = datetime.datetime.now()
print(now)

today = datetime.date.today()
print(today)
print(today.year)

from datetime import timedelta
# timedelta
t = timedelta(days = 5, hours = 1, seconds = 33, microseconds = 233423)
print("Total seconds =", t.total_seconds())

#? strftime()
# Creates a formatted string from a given datetime object.

t = now.strftime("%H:%M:%S")
print(t)
t = now.strftime("%d/%m/%Y")
print(t)

#? strptime()
# Creates a datetime object from a given string.

date_string = '25 December, 2022'
print('Date String:', date_string)
date_object = datetime.datetime.strptime(date_string, '%d %B, %Y')
print('Date Object:', date_object)

# Timezones
import pytz

local = datetime.datetime.now()
print('Local:', local.strftime('%m/%d/%Y, %H:%M:%S%p'))

tz_NY = pytz.timezone('America/New_York')
datetime_NY = datetime.datetime.now(tz_NY)
print('NY:', datetime_NY.strftime('%m/%d/%Y, %H:%M:%S%p'))

# Timestamp
# timestamp is no. of seconds since 1/1/1970

ts = datetime.datetime.timestamp(now)
print(ts)

dt_object = datetime.datetime.fromtimestamp(ts)
print(dt_object)

import time
seconds = time.time()
print('Seconds since epoch:', seconds)

seconds = 1000000000

# time.ctime() === takes seconds as arguments & returns
# a string representing local time
the_time = time.ctime(seconds)
print(the_time)

#? sleep()
# delays execution of the current thread for the 
# given no. of seconds

print('Printed Immediately.')
time.sleep(1.69)
print('Printed after 1.69 seconds.')


#! Multithreading in Python
# A program is a collection of instructions.
# A process is the execution of those instructions.
# A thread is a subset of process.
# A process can have one or more threads.

import threading

def print_hello_three_times():
    for i in range(3):
        print('Hello!')

def print_hi_three_times():
    for i in range(3):
        print('Hi!')

t1 = threading.Thread(target=print_hello_three_times)
t2 = threading.Thread(target=print_hi_three_times)

t1.start()
t2.start()


def print_hello():
    for i in range(4):
        time.sleep(0.5)
        print('Hello')

def print_hi():
    for i in range(4):
        time.sleep(0.75)
        print('Hi')

t3 = threading.Thread(target=print_hello)
t4 = threading.Thread(target=print_hi)

t3.start()
t4.start()