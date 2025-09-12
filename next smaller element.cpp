#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {2, 1, 4, 3};
    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());

    for (int i = v.size() - 1; i >= 0; i--) {
        int curr = v[i];
        while (s.top() >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }

    cout << "Next Smaller Element: " << endl;
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
