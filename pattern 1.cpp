#include <iostream>
using namespace std;
int main()
{
    //solid rect
    // for(int row=0; row<3; row=row+1){
    //     for(int col=0;col<5; col=col+1){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    //solid square
    // int n;
    // cout<<"Enter number of stars: ";
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    // for(int c=0;c<5;c++){
    //     for(int r=0;r<3;r++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    //hollow rect
    // for(int r=0; r<3; r++){
    //     if(r == 0 || r==2){
    //         for(int c=0;c<4;c++){
    //             cout<<"* ";
    //         }
    //     }else{
    //         cout<<"* ";
    //         for(int i=0; i<2 ;i=i+1){
    //             cout<<"  ";
    //         }
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    //Half pyramid
    // for(int row=0; row<5; row++){
    //     for(int col=0; col<row + 1; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    //inverted pyramid
    // for(int row=0; row<6; row++){
    //     for(int col=0; col<6-row; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    //inverted pyramid in number
    int n;
    cin>>n;
    for(int r=0; r<n; r=r + 1){
        for(int c=0; c<n - r; c=c + 1){
            cout<<c + 1;
        }
        cout<<endl;
    }
    return 0;
}