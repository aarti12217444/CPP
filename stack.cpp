#include<iostream>
// #include<stack> 
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;
    
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }
    void push(int data){
        if(size - top>1){
            top++;
            arr[top] = data;
        }
        else{
            cout<<"overflow";
        }
    }
    void pop(){
        //stack is empty
        if(top==-1){
            cout<<"start underflow";
        } 
        //stack is not empty
        else{
            top--;
        }
    }
    int getTop(){
        if(top==-1){
            cout<<"There is not element is stack";
        }
        else{
            return arr[top];
        }
    }
    int getSize(){
        return top +1;
    }
    bool isEmpty(){
        if(top ==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    // stack<int>st;
    Stack st(10);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    while(!st.isEmpty()){
        cout<<st.getTop()<<" "<<endl;
        st.pop();
    }
    cout<<"size of stack: "<<st.getSize();
    // st.pop();
    // cout<<"Element  on top is: "<<st.top()<<endl;
    // cout<<"size of stack is: "<<st.size()<<endl;
    
    // if(st.empty()){
    //     cout<<"stack is empty";
    // }else{
    //     cout<<"stack is not empty";
    // }
}