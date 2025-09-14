#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// Function to find Previous Smaller Elements
vector<int> prevSmaller(vector<int>& input) {
    stack<int> s;
    s.push(-1); // sentinel
    vector<int> ans(input.size());

    // left to right
    for (int i = 0; i < input.size(); i++) {
        int curr = input[i];
        while (s.top() >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

// Function to find Next Smaller Elements
vector<int> nextSmaller(vector<int>& input) {
    stack<int> s;
    s.push(-1); // sentinel
    vector<int> ans(input.size());

    // right to left
    for (int i = input.size() - 1; i >= 0; i--) {
        int curr = input[i];
        while (s.top() >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main() {
    vector<int> v = {2, 1, 4, 3};

    vector<int> prev = prevSmaller(v);
    vector<int> next = nextSmaller(v);

    cout << "Previous Smaller Elements:" << endl;
    for (int x : prev) cout << x << " ";
    cout << endl;

    cout << "Next Smaller Elements:" << endl;
    for (int x : next) cout << x << " ";
    cout << endl;

    return 0;
}
