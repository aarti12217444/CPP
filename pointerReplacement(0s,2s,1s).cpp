#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Print linked list
void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void sort(Node* &head) {
    if(head == NULL) return ;
    if(head->next==NULL) return;

    // Dummy heads and tails
    Node* zHead = new Node(-1); Node* zTail = zHead;
    Node* oHead = new Node(-1); Node* oTail = oHead;
    Node* tHead = new Node(-1); Node* tTail = tHead;

    // Traverse original list
    Node* curr = head;
    while(curr != NULL) {
        Node* temp = curr;
        curr = curr->next;
        temp->next = NULL;

        if(temp->data == 0) {
            zTail->next = temp;
            zTail = temp;
        }
        else if(temp->data == 1) {
            oTail->next = temp;
            oTail = temp;
        }
        else {
            tTail->next = temp;
            tTail = temp;
        }
    }

    // Connect lists together: 0s -> 1s -> 2s
    if(oHead->next != NULL) {
        zTail->next = oHead->next;
        oTail->next = tHead->next;
    } else {
        zTail->next = tHead->next;
    }

    // Update head
    head = zHead->next;

    // Delete dummy nodes
    delete zHead;
    delete oHead;
    delete tHead;
}

int main() {
    Node* first = new Node(1);
    Node* sec   = new Node(2);
    Node* third = new Node(0);
    Node* forth = new Node(0);
    Node* fifth = new Node(1);

    // Linking singly linked list
    Node* head = first;
    first->next = sec;
    sec->next = third;
    third->next = forth;
    forth->next = fifth;

    cout << "Original List: " << endl;
    print(head);

    sort(head);
    cout << "After sort of 0s, 1s and 2s: " << endl;
    print(head);

    return 0;
}
