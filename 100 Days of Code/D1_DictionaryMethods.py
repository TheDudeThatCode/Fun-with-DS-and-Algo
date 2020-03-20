#Day 1 - Dictionary Methods


user = {
    'basket' : [1,2,3],
    'greet' : 'hello',
    'age' : 20
}
print(user.get('age',10))
print('age' in user.keys())
print('home' in user.values())
print('hello' in user.values())
user.update({'age' : 30 })
print(user)


"""

OUTPUT


20
True
False
True
{'basket': [1, 2, 3], 'greet': 'hello', 'age': 30}

"""
