#include<iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* reverse_list(Node* head) {
    Node* pre = head;
    Node* curr = head;

    while(curr != NULL) {
        Node* nextNode = curr->next;
        curr->next = pre;

        pre = curr;
        curr = nextNode;
    }

    return pre;
}