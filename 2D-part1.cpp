#include <iostream>
using namespace std;

// Function to calculate row-wise sums
void rowWiseSum(int arr[][3], int size) {
    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }
}

int main() {
    // ROW SUM
    int arr[3][3] = {
        {1, 2, 3},
        {9, 3, 4},
        {6, 4, 5}
    };

    // Print the 2D array
    cout << "Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Row-wise sum
    cout << "Row-wise sums:" << endl;
    rowWiseSum(arr, 3);

    return 0;
}
