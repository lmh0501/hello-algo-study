class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


# 初始化链表 1 -> 3 -> 2 -> 5 -> 4
## 初始化各个节点
n0 = ListNode(1) 
n1 = ListNode(3)
n2 = ListNode(2)
n3 = ListNode(5)
n4 = ListNode(4)
## 构建节点之间的引用
n0.next = n1
n1.next = n2
n2.next = n3
n3.next = n4

# 插入节点
def insert(n0, P):
    n1 = n0.next
    p.next = n1
    n0.next = P

# 删除节点
def remove(n0):
    if not n0.next:
        return 
    P = n0.next
    n1 = P.next
    n0.next = n1

# 访问节点
def access(head,index):
    for _ in range(index):
        if not head:
            return None
        head = head.next
    return head

# 查找节点
def find(head, target):
    index = 0
    while head:
        if head.val == target:
            return index
        head = head.next
        index += 1
    return -1

