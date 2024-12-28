#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    
    //nested if-else
    
    // if(marks>=90){
    //     cout<<"A Grade";
    // }
    // else{
    //     if(marks>=80){
    //         cout<<"B Grade";
    //     }else{
    //         if(marks>=70){
    //             cout<<"C Grade";
    //         }else{
    //             if(marks>=60){
    //                 cout<<"D Grade";
    //             }else{
    //                 if(marks>=50){
    //                     cout<<"E Grade";
    //                 }else{
    //                     cout<<"F Grade";
    //                 }
    //             }
    //         }
    //     }
    // }
    
    
    
    //2nd method
    if(marks>=90){
        cout<<"A Grade";
    }
    else if(marks>=70){
        cout<<"B ";
    }
    else if(marks>=50){
        cout<<"C";
    }
    else{
        cout<<"F";
    }
    return 0;
}