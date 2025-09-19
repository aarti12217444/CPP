// Online C++ compiler to run C++ program online
#include <iostream>
#include<deque>
using namespace std;
int main() {
   deque<int>dq;
   dq.push_front(10);
   dq.push_front(20);
   dq.push_front(30);
   dq.push_front(40);
   dq.push_front(50);
   
   cout<<"Size: "<<dq.size()<<endl;
   cout<<"Front: "<<dq.front()<<endl; 
   dq.pop_front();
   cout<<"after pop_front: "<<dq.size()<<endl;
   dq.pop_back();
   cout<<"after pop_back: "<<dq.size()<<endl;
   cout<<"Front: "<<dq.front()<<endl; 
   
   if(dq.empty()){
       cout<<"Dq is empty"<<endl;
   }else{
       cout<<"dq is not empty"<<endl;
   }

    return 0;
}