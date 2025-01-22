// 初始化数组
// 存储在栈上
int arr[5];
int nums[5] = {1, 2, 3, 4, 5};
// 存储在对上（需手动释放空间）
int* arr1 = new int[5];
int* nums1 = new int[5] {1, 2, 3, 4, 5};

/*随机访问元素*/
int randomAccess(int *nums, int size) {
    int randomIndex = rand() % size;
    int randomNum = nums[randomIndex];
    return randomNum;
}

/*插入元素*/
void insert(int *nums, int size, int num, int index) {
    for (int i = size - 1; i > index; i--) {
        nums[i] = nums[i - 1];
    }
    nums[index] = num;
}

/*删除元素*/
void remove(int *nums, int size, int index) {
    for (int i = index;i < size - 1; i ++) {
        nums[i] = nums[i + 1];
    }
}

/*遍历数组*/
void traverse(int *nums, int size) {
    int count = 0;
    for (int i = 0; i < size; i ++) {
        count += nums[i];
    }
}

/*查找元素*/
int find(int *nums, int size, int target) {
    for (int i = 0; i < size; i ++) {
        if (nums[i] == target) {
            return i;
        }
    }
    return -1;
}

/*扩容数组*/
int *extand(int *nums, int size, int enlarge) {
    int *res = new int[size * enlarge];
    for (int i = 0; i < size; i ++) {
        res[i] = nums[i];
    }
    // 释放内存
    delete[] nums;
    return res;
}