def fib(num):
    a = 0
    b = 1
    for i in range(num):
        yield a
        temp = a
        a = b
        b = b + temp


n = int(input())
for x in fib(n):
    print(x)
