/*初始化链表 1 -> 3 -> 2 -> 5 -> 4*/
// 初始化各个节点
ListNode* n0 = new ListNode(1);
ListNode* n1 = new ListNode(3);
ListNode* n2 = new ListNode(2);
ListNode* n3 = new ListNode(5);
ListNode* n4 = new ListNode(4);
// 构建节点间引用
n0->next = n1;
n1->next = n2;
n2->next = n3;
n3->next = n4;

/*插入节点*/
void insert(ListNode *n0, ListNode *P) {
    ListNode *n1 = n0->next;
    P->next = n1;
    n0->next = P;
}

/*删除节点*/
void remove(ListNode *n0) {
    if (n0->next == nullptr) {
        return;
    }
    ListNode *P = n0->next;
    ListNode *n1 = P->next;
    n0->next = n1;
    delete P;
}

/*访问节点*/
ListNode *access(ListNode *head, int index) {
    for (int i = 0; i < index; i++) {
        if (head == nullptr)
            return nullptr;
        head = head->next;
    }
    return head;
}

/*查找结点*/
int find(ListNode *head, int target) {
    int index = 0;
    while (head != nullptr) {
        if (head->val == target) 
            return index;
        head = head->next;
        index++;
    }
    return -1;
}