# 递归
## 三个要素：终止条件、递归调用、返回结果

def recur(n):
    # 终止条件
    if n == 1:
        return 1
    # 递： 递归调用
    res = recur(n - 1)
    # 归： 返回结果
    return n + res

# 递归通常比迭代更加耗费内存空间。比循环的时间效率更低

# 尾递归
def tail_recur(n, res):
    # 终止条件
    if n == 0:
        return res
    return tail_recur(n - 1, res + n)

# 递归树 斐波那契数列
def fib(n):
    if n ==1 or n ==2:
        return n - 1
    res = fib(n - 1) + fib(n - 2)
    return res

# 使用迭代模拟递归
def for_loop_recur(n):
    stack = []
    res = 0
    # 递
    for i in range(n, 0, -1):
        stack.append(i)
    # 归
    while stack:
        res += stack.pop()
    return res

