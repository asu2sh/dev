
#! Tuple Methods

#? count()
vowels = ('a', 'e', 'i', 'o', 'u', 'i')
count = vowels.count('i')
print(count)

#? index()
index = vowels.index('o', 0, 4)
# tuple.index(i, startidx, endidx)
print(index)


#! Dictionary Methods

#? copy()
original_marks = {'Physics': 69, 'Maths': 91}
copied_marks = original_marks.copy()
print(copied_marks)

#? fromkeys()
alphabets = {'a', 'b', 'c'}
num = 9
dictionary = dict.fromkeys(alphabets, num)
print(dictionary)

