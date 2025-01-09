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

# while 比 for 循环的自由度更高，可以自由设计条件

# 嵌套循环
## 双层 for 循环
def nested_for_loop(n):
    res = ""
    for i in range(1, n + 1):
        for j in range(1, n + 1):
            res += f"({i}, {j}),"
    return res