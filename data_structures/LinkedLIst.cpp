#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int val;
    Node(int val)
    {
        this->val = val;
    }
};

// class LinkedList
// {
//     Node *head;
//     Node *tail;

// public:
//     void append(int data)
//     {
//         Node *current = head;
//         if (head == nullptr)
//         {
//             head = new Node(data);
//             return;
//         }

//         while (current->next != nullptr)
//         {
//             current = current->next;
//         }
//         current->next = new Node(data);
//     }

//     void prepand(int data)
//     {
//         Node *newHead = new Node(data);
//         newHead->next = head;
//         head = newHead;
//     }

//     void deleteValue(int value)
//     {
//         if (head == nullptr)
//         {
//             return;
//         }

//         if (head->data == value)
//         {
//             head = head->next;
//             return;
//         }

//         Node *current = head;
//         while (current->next != nullptr)
//         {
//             if (current->next->data == value)
//             {
//                 current->next = current->next->next;
//                 return;
//             }
//             current = current->next;
//         }
//     }

//     void printList()
//     {
//         Node *current = head;
//         while (current->next != nullptr)
//         {
//             cout << current->data << endl;
//             current = current->next;
//         }
//         cout << current->data << endl;
//     }
// };

class MyLinkedList
{
public:
    Node *head;
    int length;
    /** Initialize your data structure here. */
    MyLinkedList()
    {
        length = 0;
        head = NULL;
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index)
    {
        Node *current = head;
        if (length == 0 || index > length - 1)
        {
            return -1;
        }
        for (int i = 0; i < index; i++)
        {
            current = current->next;
        }
        return current->val;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val)
    {
        if (head == nullptr)
        {
            Node *newHead = new Node(val);
            newHead->next = nullptr;
            head = newHead;
        }
        else
        {
            Node *newHead = new Node(val);
            newHead->next = head;
            head = newHead;
        }
        length++;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val)
    {
        if (head == nullptr)
        {
            Node *newNode = new Node(val);
            newNode->next = nullptr;
            head = newNode;
            length++;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = new Node(val);
            current->next->next = nullptr;
            length++;
        }
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val)
    {
        if (head == nullptr || index == 0)
        {
            addAtHead(val);
            return;
        }
        Node *current = head;
        for (int i = 0; i < index - 1; i++)
        {
            current = current->next;
        }
        Node *newNode = new Node(val);
        newNode->next = current->next;
        current->next = newNode;
        length++;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index)
    {
        if (head == nullptr || index > length - 1)
        {
            return;
        }
        if ((index == 0 && length == 1) || length == 1)
        {
            head = nullptr;
            length--;
            return;
        }
        if (index == 0)
        {
            head = head->next;
            length--;
            return;
        }
        Node *current = head;
        for (int i = 0; i < index - 1; i++)
        {
            current = current->next;
        }
        current->next = current->next->next;
        length--;
    }

    void printList()
    {
        Node *current = head;
        while (current->next != nullptr)
        {
            cout << current->val << endl;
            current = current->next;
        }
        cout << current->val << endl;
    }
};

int main(int argc, char const *argv[])
{
    MyLinkedList *list = new MyLinkedList();
    list->addAtHead(4);
    cout << list->get(1) << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
    list->addAtHead(1);
    list->addAtHead(5);
    list->deleteAtIndex(3);
    list->addAtHead(7);
    cout << list->get(3) << endl;
    cout << list->get(3) << endl;
    cout << list->get(3) << endl;
    list->addAtHead(1);
    list->deleteAtIndex(4);
    // list->addAtIndex(0, 10);
    // list->addAtIndex(0, 20);
    // list->addAtIndex(1, 30);
    // cout << list->get(0) << endl;
    // list->deleteAtIndex(0);
    // cout << list->get(0) << endl;
    return 0;
}
