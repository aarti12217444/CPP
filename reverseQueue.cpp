#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void reverseQueue(queue<int>&q){
    stack<int>s;
    
    //step 1:pust all element of q into s 
    while(!q.empty()){
        int elem=q.front();
        q.pop();
        
        s.push(elem);
    }
    //step 2: put all elem from stack into q 
    
    while(!s.empty()){
        int elem=s.top();
        s.pop();
        q.push(elem);
    }
}

void reverseQueueRec(queue<int>&q){
  //base case
  if(q.empty()){
    return;
  }
  int temp=q.front();
  q.pop();
  
  reverseQueueRec(q);
  
  q.push(temp);
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    
    reverseQueueRec(q);
    
    cout<<"printing queue by recursion method:"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
     reverseQueueRec(q);
     
}











