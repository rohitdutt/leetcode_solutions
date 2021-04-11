#include <iostream>
#include "LinkedLIst.h"

class Solution
{
public:
    Node *reverseLinkedList(Node *head)
    {
        Node *prev = nullptr;
        Node *current = head;
        Node *nextNode;
        while (current->next != nullptr)
        {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        current->next = prev;
        head = current;
        cout << current->next->val << endl
             << head->next->next->val << endl;
        return head;
    }
};

int main(int argc, char const *argv[])
{
    LinkedList list;
    list.addAtTail(1);
    list.addAtTail(2);
    list.addAtTail(3);
    list.addAtTail(4);
    list.addAtTail(5);
    Solution s;
    s.reverseLinkedList(list.head);
    cout << list.head->val << endl;
    list.printList();
    return 0;
}
