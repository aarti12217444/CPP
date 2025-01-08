#include <iostream>
using namespace std;

//PRINT ALL PRIME NUMBER 1 TO N 

// bool isPrime(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//             return true;
// }

// void primeNum(int a){
//     int n;
//     for(int i=1;i<=a;i++){
//         if(isPrime(i)){
//             cout<<i<<" ";
//         }   
//     }
//     cout<<endl;
// }
// int main(){
    
//     int a;
//     cout<<"Enter number of a: ";
//     cin>>a; 
    
//     primeNum(a);
    

//NUMBER IS PRIME OR NOT 
// bool isPrime(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i=2; i*i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
//         else{
//             return true;
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
    
//     if(isPrime(n)){
//         cout<<n<<" Number is prime"<<endl;
//     }else{
//         cout<<n<<" Number is not prime"<<endl;
//     }
    

//FACTORIAL OF NUMBER 

// int factorialOfNumber(int a){
//     int fact = 1;
//     for(int i=1;i<=a;i++){
//         fact *= i;
//     }
//     return fact;
// }
// int main(){
//     int a;
//     cout<<"Enter number of a: ";
//     cin>>a;
    
//     int ans = factorialOfNumber(a);
//     cout<<"Factorial of a number is: "<<ans;


//EVEN OR ODD
// string evenOrOdd(int e){
//     if(e%2==0){
//         return "Even";
//     }else{
//         return "Odd";
//     }
// }
// int main(){
//     int e;
//     cout<<"enter number: ";
//     cin>>e;
    
//     string ans = evenOrOdd(e);
//     cout<<"Number is even or odd: "<<ans;

//AREA OF CIRCLE
// double circleArea(double r){
//     return 3.14*r*r;
// }
// int main(){
//     double r;
//     cout<<"Enter radius of circle: ";
//     cin>>r;
    
//     double ans = circleArea(r);
//     cout<<"The are of circle is: "<<ans;
    
    return 0;
}