#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void interLeave(queue<int>&q){
  //step 1: seperate queue
  int n=q.size();
  if(q.empty()) return;
  int k=n/2;
  int count=0;
  queue<int>q2;
  
  while(!q.empty()){
    int temp=q.front();
    q.pop();
    q2.push(temp);
    count++;
    
    if(count == k)  break;
  }
  
  //step2: interleaving statat karo
  while(!q.empty() && !q2.empty()){
    int first=q2.front();
    q2.pop();
    
    q.push(first);
    
    int second=q.front();
    q.pop();
    
    q.push(second);
  }
  //odd wala case
  if(n&1){
    int element = q.front();
    q.pop();
    q.push(element);
  }
}


int main() {
    queue<int> q;
    q.push(1);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);

   interLeave(q);

    cout << "Queue after reversing first "<< endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
