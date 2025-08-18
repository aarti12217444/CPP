#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        cout<<"Node with value: "<<this->data<<endl;
    }
};

void insertAtHead(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int data, Node* &head, Node* &tail, int pos){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Insert at head
    if(pos == 1){
        insertAtHead(head, tail, data);
        return;
    }

    int len = findLength(head);

    // Insert at tail
    if(pos > len){
        insertAtTail(head, tail, data);
        return;
    }

    // Insert in middle
    int i = 1;
    Node* prev = head;
    while(i < pos-1){
        prev = prev->next;
        i++;
    }

    Node* newNode = new Node(data);
    newNode->next = prev->next;
    prev->next = newNode;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteNode(int pos,Node* &head, Node* &tail){
    if(head==NULL){
        cout<<"Cannot delete, LL is empty";
        return;
    }
    //delete 1st node
    if(pos==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    int len=findLength(head);
    //delete last node
    if(pos==len){
        //find prev
        int i=1;
        Node* prev=head;
        while(i<pos-1){
            prev=prev->next;
            i++;
        }
        prev->next=NULL;
        Node* temp=tail;
        tail=prev;
        delete temp;
        return;
    }
    //delete from position
    int i=1;
    Node* prev=head;
    while(i<pos-1){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    // Insert at head
    insertAtHead(head, tail, 12);
    insertAtHead(head, tail, 127);
    insertAtHead(head, tail, 121);
    insertAtHead(head, tail, 122);
    insertAtHead(head, tail, 142);

    cout << "Printing the LL: " << endl;
    print(head);

    cout << endl;
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    cout << "Insert at position 2 ->" << endl;
    insertAtPosition(101, head, tail, 2);
    print(head);

    cout << endl;
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    cout << "Insert at last position ->" << endl;
    insertAtPosition(555, head, tail, 10); // bigger than length, goes at tail
    print(head);

    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    
    deleteNode(1,head,tail);
    cout<<"1st Node deleteion: "<<endl;
    cout<<endl;
    print(head);
    cout<<endl;
    
    cout<<"Position node deletion: "<<endl;
    deleteNode(3,head,tail);
    cout<<endl;
    print(head);
    cout<<endl;

    return 0;
}
