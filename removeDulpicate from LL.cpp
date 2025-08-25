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

void removeDuplicate(Node* &head){
    if(head==NULL){
        cout<<"LL is empty";
        return;
    }
    if(head->next==NULL){
        cout<<"Single Node in LL"<<endl;
        return;
    }
    Node* curr=head;
    while(curr!=NULL){
        if((curr->next!=NULL) && curr->data ==curr->next->data){
            Node* temp=curr->next;
            curr->next=curr->next->next;
            
            
            temp->next=NULL;
            delete temp;
        }else{
            curr=curr->next;
        }
    }
}

int main(){
    Node* first = new Node(10);
    Node* sec   = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(30);
    Node* fifth = new Node(40);
    
    
    // Linking singly linked list
    Node* head = first;
    first->next = sec;
    sec->next = third;
    third->next=forth;
    forth->next=fifth;
   
    cout << "Original List (safe print): "<<endl;
    print(head);
    
    removeDuplicate(head);
    cout<<"After remove duplicate LL: "<<endl;
    print(head);

   
    return 0;
}
 