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
Node* revese(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=curr->next;
    while(curr != NULL){
        next= curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
bool checkPalindrom(Node* &head){
    if(head==NULL){
        return true;
    }
    if(head->next==NULL){
        return true;
    }
    Node* slow=head;
    Node* fast=head;
    
    while(fast!=NULL){
        fast =fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    //slow pointer pointing to middle
    Node* reverseLLKaHead=revese(slow->next);
    
    slow->next=reverseLLKaHead;
    
    Node* temp1=head;
    Node* temp2=reverseLLKaHead;
    
    while(temp2!=NULL){
        if(temp1->data != temp2->data){
            return false;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;
}

int main(){
    Node* first = new Node(10);
    Node* sec   = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(40);
    Node* fifth = new Node(30);
    Node* sixth = new Node(20);
    Node* seventh = new Node(10);
    
    // Linking singly linked list
    Node* head = first;
    first->next = sec;
    sec->next = third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=NULL;   // loop ban gaya

    cout << "Original List (safe print): "<<endl;
    print(head);

bool isPalindrom=checkPalindrom(head);
    if(isPalindrom){
        cout<<"LL is a valid palindrom"<<endl;
    }else{
        cout<<"LL is not a valid palindrom"<<endl;
    }

   
    return 0;
}
 