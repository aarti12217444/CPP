#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        cout << "node with value: " << this->data << " delete" << endl;
    }
};

// Print linked list
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Length find
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

// Recursive Reverse
Node* reverseRecursive(Node* prev, Node* curr){
    if(curr == NULL){
        return prev;   // prev becomes new head
    }
    Node* forward = curr->next;
    curr->next = prev;
    return reverseRecursive(curr, forward);
}

// Iterative Reverse
Node* reverseLoop(Node* head){
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev; // new head
}

int main(){
    Node* first = new Node(10);
    Node* sec   = new Node(20);
    Node* third = new Node(30);

    // Linking singly linked list
    Node* head = first;
    first->next = sec;
    sec->next = third;

    cout << "Original List: ";
    print(head);

    // Reverse by recursion
    head = reverseRecursive(NULL, head);
    cout << "Reversed by Recursion: ";
    print(head);

    // Reverse again by loop
    head = reverseLoop(head);
    cout << "Reversed by Loop: ";
    print(head);

    return 0;
}
