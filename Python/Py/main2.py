from math import *

# hello world

print('Hello World')
print('   /|')
print('  / |')
print(' /__|')

# variables

my_name = 'Denji'
my_age = '23'
is_male = True

print('Hi, my name is ' + my_name + '.')
print('I, ' + my_name + ' is the chainsaw man.')
print('I am ' + my_age + ' years old')
print('I didn\'t like being ' + my_age + '.')

# strings

print('Chainsaw\nMan')
anime = 'Demon Slayer'
print(anime + ' is a cool anime.')
print(anime.upper())        # .upper()
print(anime.islower())      # .islower()
print(len(anime))           # len()
print(anime.index('S'))     # .index()
print(anime.index('mon'))
print(anime.replace('Slayer', 'God'))       # .replace()

# numbers

print(13)
pi = -3.14
print(pi)
print(str(pi))      # str()
print(abs(pi))      # abs()
print(pow(2, 3))    # pow()
print(max(4, 6))    # max()
print(round(pi))    # round()
print(ceil(pi))     # ceil()
print(sqrt(36))     # sqrt()

# user input

# your_name = input('Enter your name: ')
# print('Hi, ' + your_name + '!')

# calculator

# input1 = input('Enter first number: ')
# input2 = input('Enter second number: ')
# print('Sum: ' + str(int(input1) + float(input2)))

# mad libs

# color = input('Enter a color: ')
# noun = input('Enter a noun: ')
# celebrity = input('Enter a celebrity: ')
# print('Roses are ' + color)
# print(noun + ' are blue')
# print('I love ' + celebrity)

# list

friends = ['Charli', 'Oruuu', 'Subhit', 'Hrithik', 'Rishav']
print(friends)
print(friends[1])
print(friends[-2])      # -ve idx
print(friends[1:])      # [2: ]
print(friends[1:3])     # [1:3]
# print(friends.clear())  # .clear()  # o/p: None
print(friends.pop())    # .pop()
print(friends.index('Hrithik'))      # .index()
print(friends.count('Oruuu'))       # .count()
friends.sort()      # .sort()
print(friends)
friends.reverse()   # .reverse()
print(friends)
friends2 = friends.copy()   # .copy()

# tuples

coordinates = (4, 5)
print(coordinates[0])

# function

def say_hi(name):
    print('Hello ' + name)

say_hi("Asutosh ")

# if/else

is_male = True
is_tall = False

if not(is_male):
    print('Male')
elif is_male and not(is_tall):
    print('Male and Tall')
else:
    print('Female')

# dictionary

monthConversions = {
    'Jan': 'January',
    'Feb': 'February',
    'Mar': 'March',
}

print(monthConversions['Feb'])
print(monthConversions.get('Apr', 'Not a Valid Key'))

# while

i = 1
while i <= 3:
    print('La ')
    i += 1

# guessing game

# secret_num = 3
# guess = ''
# guess_cnt = 0

# while guess != secret_num and guess_cnt < 3:
#     guess = int(input('Enter guess: '))
#     guess_cnt += 1
#     if(guess == secret_num):
#         print('You Win!')
#     elif(guess_cnt == 3):
#         print('You Lose!')

# for loop

# for friend in friends:
#     print(friend)

for i in range (3, 5):
    print(i)

# exponent fn

print(2 ** 3)

def raise_to_power(base_num, pow_num):
    res = 1
    for i in range(pow_num):
        res = res * base_num
    return res

print(raise_to_power(2, 3))

# translator

def translate(phrase):
    translation = ''
    for letter in phrase:
        if letter in 'AEIOUaeiou':
            translation += 'g'
        else:
            translation += letter
    return translation

# print(translate(input('Enter a phrase: ')))

# try/except

try:
    z = 10/0
    num = int(input('Enter a number: '))
    print(num)
except ZeroDivisionError as err:
    print(err)
except ValueError:
    print('Invalid Input')

# classes & objects
# object functions

class Student:
    def __init__(self, name, major, gpa, placed):
        self.name = name
        self.major = major
        self.gpa = gpa
        self.placed = placed
    def good_gpa(self):
        if self.gpa >= 7:
            return True
        else:
            return False

student1 = Student('Charli', 'IT', 6, True)
student2 = Student('Mini', 'M.Com', 7, False)
print(student1.gpa)
print(student2.name)
print(student1.good_gpa())
print(student2.good_gpa())

# inheritance

class Chef:
    def make_chicken(self):
        print('Chef makes the chicken')
    def make_salad(self):
        print('Chef makes the salad')
    def make_special_dish(self):
        print('Chef makes chicken bbq')

class ChineseChef(Chef):
    def make_chinese(self):
        print('Chef makes CHINESE')
    def make_special_dish(self):
        print('Chef makes paneer butter masala')

myChef = Chef()
urChef = ChineseChef()

urChef.make_salad()
myChef.make_salad()
urChef.make_chinese()
myChef.make_special_dish()
urChef.make_special_dish()

# reading files

# r -> read
# w -> write
# a -> append
# r+ -> read & write
# a+ -> append & read

employee_file = open(r'c:\Users\skull\dev\Python\employees.txt', 'r+')
print(employee_file.readable())
print(employee_file.read())
# employee_file.write('Oruu - Civil')
employee_file.close()











