#include<iostream>
using namespace std;

//defination of singly linked list
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// remove linked list element
ListNode* removeElements(ListNode* head, int val) {
    while(head != NULL && head->val == val){
        head = head->next;
    }
    ListNode* currentNode = head;
    while(currentNode != NULL && currentNode->next != NULL){
        if(currentNode->next->val == val){
            currentNode->next = currentNode->next->next;
        }else{
            currentNode = currentNode->next;
        }
    }
    return head;
}