// for 循环
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