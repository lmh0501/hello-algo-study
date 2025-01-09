// for 循环
#include <string>
int forloop(int n) {
    int res = 0;
    for (int i = 1;i <= n; ++i){
        res += i;
    }
    return res;
}

// while 循环
int whileloop(int n) {
    int res = 0;
    int i = 1;
    while (i <= n) {
        res += i;
        i ++;
    }
    return res;
}

// 双层 for 循环
string nestedForLoop(int n) {
    ostringstream res;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1l j <= n; ++j) {
            res << "(" << i << ", " << j << "), ";
        }
    }
    return res;
}