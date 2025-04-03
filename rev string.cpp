#include <iostream>
#include <string>
using namespace std;

// Calculate Length
int getLength(char name[]) {
    int l = 0;
    int i = 0;
    while (name[i] != '\0') {
        l++;
        i++;
    }
    return l;
}

// Reverse a string
void reverseString(char name[]) {
    int k = 0;
    int n = getLength(name);
    int j = n - 1;
    while (k < j) { // Swap until k < j
        swap(name[k], name[j]);
        k++;
        j--;
    }
}

int main() {
    char name[100];
    cout << "Enter a string: ";
    cin >> name;  // Only takes input until space
    
    cout << "Length is: " << getLength(name) << endl;

    // Reverse a string
    cout << "Before reverse: " << name << endl;
    reverseString(name);
    cout << "After reverse: " << name << endl;

    return 0;
}
