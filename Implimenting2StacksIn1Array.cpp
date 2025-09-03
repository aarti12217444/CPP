#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    
    Stack(int size){
        arr = new int[size];
        this->size=size;
        top1 = -1;
        top2=size;
    }
    void push1(int data){
        if(top2-top1==1){
            cout<<"overflow"<<endl;
        }else{
            top1++;
            arr[top1]=data;
        }
    }
    void pop1(){
        if(top1==-1){
            cout <<"Underflow"<<endl;
        }
        else{
            top1--;
        }
    }
    void push2(int data){
        if(top2-top1==1){
            cout<<"overflow"<<endl;
        }else{
            top2--;
            arr[top2]=data;
        }
    }
    void pop2(){
        if(top2==size){
            cout <<"Underflow"<<endl;
        }
        else{
            top2++;
        }
    }
     // Print Stack1
    void print1(){
        if(top1 == -1){
            cout << "Stack1 is empty" << endl;
        } else {
            cout << "Stack1 elements: ";
            for(int i = 0; i <= top1; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    // Print Stack2
    void print2(){
        if(top2 == size){
            cout << "Stack2 is empty" << endl;
        } else {
            cout << "Stack2 elements: ";
            for(int i = size - 1; i >= top2; i--){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main(){
    Stack s(10);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);
    s.push1(50);
    
    s.push2(100);
    s.push2(200);
    s.push2(300);
    s.push2(400);
    s.push2(500);
    // cout<<s.pop1();
     // Print both stacks
    s.print1();
    s.print2();

    // After popping
    s.pop1();
    s.pop2();

    s.print1();
    s.print2();

}