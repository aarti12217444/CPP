#include<iostream>
#include<stack>
#include<vector>
#include<limits.h>
using namespace std;

// Function to find Previous Smaller Elements (indexes)
vector<int> prevSmaller(vector<int>& input) {
    stack<int> s;
    s.push(-1); // sentinel
    vector<int> ans(input.size());

    for (int i = 0; i < input.size(); i++) {
        int curr = input[i];
        while (s.top() != -1 && input[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top(); // index of previous smaller
        s.push(i);
    }
    return ans;
}

// Function to find Next Smaller Elements (indexes)
vector<int> nextSmaller(vector<int>& input) {
    stack<int> s;
    s.push(-1); // sentinel
    vector<int> ans(input.size());

    for (int i = input.size() - 1; i >= 0; i--) {
        int curr = input[i];
        while (s.top() != -1 && input[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top(); // index of next smaller
        s.push(i);
    }
    return ans;
}

int getRectangularArea(vector<int>& heights) {
    vector<int> prev = prevSmaller(heights);
    vector<int> next = nextSmaller(heights);

    int maxArea = 0;
    int size = heights.size();

    for (int i = 0; i < size; i++) {
        int len = heights[i];
        if (next[i] == -1) {
            next[i] = size; // agar right side me chhota element na mile
        }
        int wid = next[i] - prev[i] - 1;
        int area = len * wid;
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main() {
    vector<int> v = {2, 1, 4, 3, 6, 4, 9, 1};

    vector<int> prev = prevSmaller(v);
    vector<int> next = nextSmaller(v);

    cout << "Previous Smaller Indexes:" << endl;
    for (int x : prev) cout << x << " ";
    cout << endl;

    cout << "Next Smaller Indexes:" << endl;
    for (int x : next) cout << x << " ";
    cout << endl;

    cout << "Largest Rectangular Area in Histogram: " << getRectangularArea(v) << endl;

    return 0;
}
