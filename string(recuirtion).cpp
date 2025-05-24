// #include<iostream>
// using namespace std;

// bool present(string s, int n, int i, char ac) {
//     if(i >= n)
//         return false;

//     if(s[i] == ac)
//         return true;

//     return present(s, n, i + 1, ac);
// }

// int main() {
//     string s = "abcdef";
//     int n = s.length();
//     char ac = 'd';  // ✅ use single quotes for char
//     int i = 0;

//     bool ans = present(s, n, i, ac);
//     // cout << "Answer is: " << (ans ? "true" : "false");
//     cout<<ans;
// }

// #include<iostream>
// using namespace std;

// int present(string s, int n, int i, char ac) {
//     if(i >= n)
//         return -1;

//     if(s[i] == ac)
//         return 1;

//     return present(s, n, i + 1, ac);
// }

// int main() {
//     string s = "abcdef";
//     int n = s.length();
//     char ac = 'd';  // ✅ use single quotes for char
//     int i = 0;

//     int ans = present(s, n, i, ac);
//     // cout << "Answer is: " << (ans ? "true" : "false");
//     cout<<ans;
// }


#include<iostream>
using namespace std;

void present(string s, int n, int i, char ac) {
    if(i >= n)
        return;

    if(s[i] == ac)
        cout<<"Found at: "<<i<<endl;
        return present(s, n, i + 1, ac);
}

int main() {
    string s = "abcdedf";
    int n = s.length();
    char ac = 'd';  // ✅ use single quotes for char
    int i = 0;

     present(s, n, i, ac);
    // cout << "Answer is: " << (ans ? "true" : "false");
    
}


