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

// Print linked list (safe print to avoid infinite loop)
void print(Node* head){
    Node* temp = head;
    int count = 0;   // safety counter
    while(temp != NULL && count < 20){   // max 20 nodes print
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << endl;
}


bool checkForLoop(Node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return false;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast != NULL && fast->next != NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            return true;   // loop found
        }
    }
    return false;
}

Node* startingPoint(Node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast != NULL && fast->next != NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            slow=head;
            break;
        }
    }
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow; 
}



// Function to detect and remove loop in a linked list that
// may contain loop
void removeLoop(Node *head) {
  
    // If list is empty or has only one node without loop
    if (head == nullptr || head->next ==nullptr)
        return;

    Node *slow = head, *fast = head;

    // Move slow and fast 1 and 2 steps ahead respectively.
    slow = slow->next;
    fast = fast->next->next;

    // Search for loop using slow and fast pointers
    while (fast && fast->next) {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }

    // If loop exists
    if (slow == fast) {
        slow = head;

        // this check is needed when slow and fast both meet
        // at the head of the LL
        if (slow == fast)
            while (fast->next != slow)
                fast = fast->next;
        else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }

        // since fast->next is the looping point 
        fast->next = nullptr;
    }
}


int main(){
    Node* first = new Node(10);
    Node* sec   = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(50);
    Node* fifth = new Node(60);
    Node* sixth = new Node(70);
    Node* seventh = new Node(80);
    
    // Linking singly linked list
    Node* head = first;
    first->next = sec;
    sec->next = third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=forth;   // loop ban gaya

    cout << "Original List (safe print): "<<endl;
    print(head);

    cout << "Loop present or not: " << checkForLoop(head) << endl;
    cout<<"starting poin of loop: "<<startingPoint(head)->data<<endl;
    removeLoop(head);
    print(head);
   cout << "Loop present or not: " << checkForLoop(head);
    return 0;
}
 