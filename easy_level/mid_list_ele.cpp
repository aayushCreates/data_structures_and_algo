#include<iostream>

using namespace std;

class Node {
    public:
        int val;
        Node* next;

    Node(int val) {
        this->val = val;
        next = NULL;
    }
};

Node* list_mid(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}