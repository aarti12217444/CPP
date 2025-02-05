#include<iostream>
using namespace std;

// bool isPrime(int a){
//     for(int i=2; i<a;i++){
//         if(a%i==0){
//             return false;
//         }
//     }
//       return true;
// }
bool Armstrong(int a){
    int cA=a;
    int sumOfCount = 0;
    
    while(a != 0){
        int digit = a %10;
        sumOfCount += digit * digit * digit;
        a=a/10;
    }
    return sumOfCount == cA;
}
int main(){
    // int a;
    // cout<<"Enter  integer value: "<<endl;
    // cin>>a;
    
    // if(isPrime(a)){
    //     cout<<"Prime number"<<endl;
    // }else{
    //     cout<<"Not a prime number";
    // }
    
    int a=111;
    if(Armstrong(a)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}