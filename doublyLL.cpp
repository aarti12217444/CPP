#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        cout<<"node with value: "<<this->data<<" delete" <<endl;
    }
};

//print doubly LL
void print(Node* &head){
    Node* temp=head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//length find
int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp != NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

//insert at head
void insertAtHead(int data, Node* &head, Node* &tail){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }else{
        Node* newNode=new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}

//insert At Tail
void insertAtTail(int data, Node* &head, Node* &tail){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }else{
        Node* newNode=new Node(data);
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }
}

//insert At  Position
void insertAtPosition(int data, int pos,Node* &head, Node* &tail){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        if(pos==1){
            insertAtHead(data,head,tail);
            return;
        }
        int len=getLength(head);
        if(pos>=len){
            insertAtTail(data,head,tail);
            return;
        }
        int i=1;
        Node* prevNode=head;
        while(i<pos-1){
            prevNode=prevNode->next;
            i++;
        }
        Node* curr=prevNode->next;
        
        Node* newNode=new Node(data);
        prevNode->next=newNode;
        newNode->prev=prevNode;
        curr->prev=newNode;
        newNode->next=curr;
    }
}

//delete at position
void deleteFromPos(int pos, Node* &head, Node* &tail){
    if(head==NULL){
        cout<<"Linked list is empty";
        return;
    }
    if(head->next==NULL){
        Node*temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    int len  =getLength(head);
    if(pos>len){
        cout<<"Please enter a valid position"<<endl;
        return;
    }
    if(pos==1){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    if(pos == len){
        Node* temp=tail;
        tail=tail->prev;
        temp->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    int i=1;
    Node* left=head;
    while(i<pos-1){
        left=left->next;
        i++;
    }
    Node* curr = left->next;    
    Node* right = curr->next;

    left->next = right;
    right->prev = left;

    curr->prev = NULL;
    curr->next = NULL;
    delete curr;
}

//make circular doubly LL
void makeCircular(Node* &head, Node* &tail){
    if(head == NULL){
        cout<<"List is empty, cannot make circular"<<endl;
        return;
    }
    head->prev = tail;
    tail->next = head;
}

//print circular LL
void printCircular(Node* &head) {
    if(head == NULL){
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != head);
    cout << endl;
}


int main(){
    Node* first=new Node(10);
    Node* sec=new Node(20);
    Node* third=new Node(30);
    Node* head = first;
    Node* tail = third;
    
    first->next=sec;
    sec->prev=first;
    sec->next=third;
    third->prev=sec;
    
    print(first);
    cout<<endl;
    
    insertAtHead(101,head,tail);
    cout<<"After insertion at head: ";
    print(head);
    cout<<endl;
    
    insertAtTail(102,head,tail);
    cout<<"After insertion at tail: ";
    print(head);
    cout<<endl;
    
    insertAtPosition(103,2,head,tail);
    cout<<"After insertion at position 2: ";
    print(head);
    cout<<endl;
    
    deleteFromPos(1, head, tail);
    cout<<"After deleting position 1: ";
    print(head);
    cout<<endl;

    deleteFromPos(3, head, tail);
    cout<<"After deleting position 3: ";
    print(head);
    cout<<endl;

    deleteFromPos(getLength(head), head, tail);
    cout<<"After deleting last node: ";
    print(head);
    cout<<endl;
    
    makeCircular(head,tail);
    cout<<"After circular doubly linked list: ";
    printCircular(head);
    cout<<endl;
    
    return 0;
}
