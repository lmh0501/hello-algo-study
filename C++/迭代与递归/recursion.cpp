// 递归
#include <stack>
int recur(int n) {
    // 终止条件
    if (n == 1) return 1;
    // 递
    int res = recur(n - 1);
    // 归
    return n + res;
}

// 尾递归
int tailRecur(int n, int res) {
    // 终止条件
    if (n == 0)
        return res;
    return tailRecur(n - 1, res + n);
}

// 递归树 斐波那契数列
int fib(int n) {
    // 终止条件
    if (n == 1 || n == 2) {
        return n - 1;
    }
    // 递归调用 f(n) = f(n-1) + f(n-2)
    int res = fib(n - 1) + fib(n - 2);
    return res;
}

// 迭代模拟递归
int forLoopRecur(int n) {
    stack<int> stack;
    int res = 0;
    // 递
    for (int i = n; i > 0; i--) {
        stack.push(i);
    }
    // 归
    while (!stack.empty()) {
        res  += stack.top();
        stack.pop();
    }
    return res;
}

