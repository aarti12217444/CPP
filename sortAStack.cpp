#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int>& s, int target){
    // Base case: agar stack empty hai ya top >= target
    if(s.empty() || s.top() >= target){
        s.push(target);
        return;
    }
    
    int topElem = s.top();
    s.pop();
    insertSorted(s, target);

    // Backtrack
    s.push(topElem);
}

void sortStack(stack<int>& s){
    if(s.empty()){
        return;
    }

    int top = s.top();
    s.pop();

    // Recursive call
    sortStack(s);

    // Insert in sorted order
    insertSorted(s, top);
}

int main(){
    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);
    
    sortStack(s);
    
    cout << "Printing sorted stack (top to bottom): " << endl;
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
