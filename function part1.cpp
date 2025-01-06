#include <iostream>
using namespace std;

//SUM OF N number

int sumOfNumber(int n){
    int sum=0;
    for(int i=0; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}
int sumOfEvenNumber(int n){
    int sum=0;
    for(int i=2; i<=n; i=i+2){
        sum=sum + i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    
    int result = sumOfNumber(n);
    cout<<"sum of number is: "<<result<<endl;
    
    int ans = sumOfEvenNumber(n);
    cout<<"Sum of even number: "<<ans;


//STUDENT GRADE
// int studentGrade(int g){
//  switch (g/10){
//      case 10: return 'O';break;
//      case 9: return 'A';break;
//      case 8: return 'B';break;
//      case 7: return 'C';break;
//      case 6: return 'D';break;
//      default: return 'F';
//  }
// }
// int main(){
//     int  g;
//     cout<<"Enter student number: ";
//     cin>>g;
//     char grade=studentGrade(g);
//     cout<<"Students grade is: "<<grade;

// int studentGrade(int g){
//  if (g >= 90) {
//         return 'O'; // Outstanding grade
//     } else if (g >= 80 && g < 90) {
//         return 'A'; // Excellent grade
//     } else if (g >= 60 && g < 80) {
//         return 'B'; // Good grade
//     } else if (g >= 40 && g < 60) {
//         return 'C'; // Average grade
//     } else {
//         return 'F'; // Fail
//     }
// }
// int main(){
//     int  g;
//     cout<<"Enter student number: ";
//     cin>>g;
//     char grade=studentGrade(g);
//     cout<<"Students grade is: "<<grade;



//COUNTING NUMBER 1 TO N 
// void printCount(int n){
//     for(int i=1; i<=n;i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;
    
//     printCount(n);


//3 NUMBER GREATER

// int findMaxi(int x,int y,int z){
//     if(x>y && x>z){
//         return x;
//     }
//     else if(y>x && y>z){
//         return y;
//     }
//     else{
//         return z;
//     }
// }

// int main(){
//     int x,y,z;
//     cin>>x>>y>>z;
//     int findMax= findMaxi(x,y,z);
//     cout<<findMax<<endl;

//SUM OF 2 NUMBER

// int add(int a,int b){
//     int result= a+b;
//     return result;
// }
// int main()
// {
//     int a;
    
//     cout<<"Enter value of a:";
//     cin>>a;
    
//     int b;
    
//     cout<<"Enter value of b:";
//     cin>>b;
    
//     int sum=add(a,b);
//     cout<<"Addition result is: "<<sum<<endl;

    return 0;
}