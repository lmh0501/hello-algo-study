# for 循环
def for_loop(n):
    res = 0
    for i in range(1, n + 1):
        res += i
    return res

# while 循环
def while_loop(n):
    res = 0
    i = 1
    while i <= n:
        res += i
        i += 1
    return res