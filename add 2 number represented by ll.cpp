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
Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=curr->next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

Node* solve(Node* &head1, Node* &head2) {
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    //reverse ll both
   head1=reverse(head1);
   head2=reverse(head2);
   
    //add them
   Node* ansHead=NULL;
   Node* ansTail=NULL;
   int carry=0;
   while(head1!=NULL && head2!= NULL){
       int sum=carry + head1->data + head2->data;
       int digit = sum% 10;
       carry= sum/10;
       Node* newNode=new Node(digit);
       if(ansHead==NULL){
           ansHead=newNode;
           ansTail=newNode;
       }
       else{
           ansTail->next=newNode;
           ansTail=newNode;
       }
       head1=head1->next;
       head2=head2->next;
   }
   //jab head1 list ki length head2 se  jada hoga
   while(head1!=NULL){
       int sum=carry+ head1->data;
       int digit = sum% 10;
       carry= sum/10;
       Node* newNode=new Node(digit);
       ansTail->next=newNode;
       ansTail=newNode;
       head1=head1->next;
   }
   //
   while(head2!=NULL){
       int sum=carry+ head2->data;
       int digit = sum% 10;
       carry= sum/10;
       Node* newNode=new Node(digit);
       ansTail->next=newNode;
       ansTail=newNode;
       head2=head2->next;
   }
   //handle carry ko alag se 
   while(carry != 0){
       int sum=carry;
       int digit=sum%10;
       carry=sum/10;
       Node* newNode=new Node(digit);
       ansTail->next=newNode;
       ansTail=newNode;
   }
    //reverse ans ll
    ansHead =reverse(ansHead);
    return ansHead;
}
int main() {
   

  Node* head1=new Node(2);
  Node* sec1=new Node(4);
  head1->next=sec1;
  
  Node* head2=new Node(2);
  Node* sec2=new Node(4);
  Node* third2=new Node(6);
  head2->next=sec2;
  sec2->next=third2;

Node* ans=solve(head1,head2);
    cout << "Original List: " << endl;
    print(ans);

   

    return 0;
}
