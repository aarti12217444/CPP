#include <iostream>
#include <deque>
using namespace std;

//tc o(n) sc o(k)

void solve(int arr[], int n, int k) {
    deque<int> q;

    // Process first window of size k
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            q.push_back(i);
        }
    }

    // Process the rest of the array
    for (int i = k; i < n; i++) {
        // Print answer for previous window
        if (q.empty()) {
            cout << 0 << " ";
        } else {
            cout << arr[q.front()] << " ";
        }

        // Remove elements that are out of this window
        while ((!q.empty()) && i - q.front() >= k) {
            q.pop_front();
        }

        // Add current element if it is negative
        if (arr[i] < 0) {
            q.push_back(i);
        }
    }

    // Print answer for the last window
    if (q.empty()) {
        cout << 0 << " ";
    } else {
        cout << arr[q.front()] << " ";
    }
}

int main() {
    int arr[] = {12, -1, -7, 8, -15, 3, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    solve(arr, n, k);

    return 0;
}
