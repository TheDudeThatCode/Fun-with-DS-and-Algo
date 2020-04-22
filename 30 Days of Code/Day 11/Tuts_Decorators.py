#  Decorators #
#-------------#


def my_decorator(func):
    def wrap_func():
        print('******')
        func()
        print('******')
    return wrap_func


@my_decorator
def hello():
    print('HELLO')
    return 0


hello()

#--------------------END OF PROGRAM-----------------------#



#    OUTPUT   #
#-------------#

******
HELLO
******
