#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array
    sort(arr.begin(), arr.end());

    cout << "Alternate elements of sorted array: ";
    for(int i = 0; i < n; i += 2) {
        cout << arr[i] << " ";
    }

    return 0;
}
