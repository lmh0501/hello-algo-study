# 初始化数组
import random


arr = [0] * 5
nums = [1, 2, 3, 4, 5]

# 随机访问元素
def random_access(nums):
    random_index = random.randint(0, len(nums) - 1)
    random_num = nums[random_index]
    return random_num

# 插入元素
def insert(nums, num, index):
    for i in range(len(nums) - 1, index, -1):
        nums[i] = nums[i - 1]
    nums[index] = num

# 删除元素
def remove(nums, index):
    for i in range(index, len(nums) - 1):
        nums[i] = nums[i + 1]

# 遍历数组
def traverse(nums):
    count = 0
    ## 通过索引遍历
    for i in range(len(nums)):
        count += nums[i]
    ## 直接遍历
    for num in nums:
        count += num
    for i, num in enumerate(nums):
        count += nums[i]
        count += num

# 查找元素
def find(nums, target):
    for i in range(len(nums)):
        if nums[i] == target:
            return i 
    return -1

# 扩容数组
def extand(nums, enlarge):
    res = [0] * (len(nums) + enlarge)
    for i in range(len(nums)):
        res[i] = nums[i]
    return res

