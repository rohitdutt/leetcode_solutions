
struct ListNode {
    int val;
    ListNode *next;
    ListNode();
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* start = new ListNode();
    start->next = head;
    ListNode* fast = start;
    ListNode* slow = start;
    
    for(int i = 1; i <= n + 1; i++){
        fast = fast->next;
    }
    
    while(fast != nullptr){
        fast = fast->next;
        slow = slow->next;
    }
    
    slow->next = slow->next->next;
    
    return start->next;
}
