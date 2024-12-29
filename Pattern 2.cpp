#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    
    //full pyramid
    // for(int r=0;r<n; r++){
    //     int k=0;
    //     for(int c=0;c<(n*2)-1; c++){
    //         if(c<n-r-1){
    //             cout<<" ";
    //         }
    //         else if(k<2 * r + 1){
    //             cout<<"*";
    //             k++;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    
    //hollow full pyramid
    // for(int r=0;r<n; r++){
    //     int k=0;
    //     for(int c=0;c<(n*2)-1; c++){
    //         if(c<n-r-1){
    //             cout<<" ";
    //         }
    //         else if(k<2 * r + 1){
    //             if(k==0 || k==2*r|| r==n-1){
    //                 cout<<"*"; 
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //             k++;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    
    //Inverted full pyramid
    // for(int row=0; row<n; row++){
    //     //space
    //     for(int col=0;col<row;col++){
    //         cout<<" ";
    //     }
    //     //*
    //         for(int col=0;col<n-row;col++){
    //             cout<<"* ";
    //         } 
    //         cout<<endl;
    //     }
        
        
        //solid diamond
    //     for(int r=0;r<n; r++){
    //     int k=0;
    //     for(int c=0;c<(n*2)-1; c++){
    //         if(c<n-r-1){
    //             cout<<" ";
    //         }
    //         else if(k<2 * r + 1){
    //             cout<<"*";
    //             k++;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int row=0; row<n; row++){
    //     //space
    //     for(int col=0;col<row;col++){
    //         cout<<" ";
    //     }
    //     //*
    //         for(int col=0;col<n-row;col++){
    //             cout<<"* ";
    //         } 
    //         cout<<endl;
    //     }
    
    //hollow diamond
    for(int r=0;r<n; r++){
        int k=0;
        for(int c=0;c<(n*2)-1; c++){
            if(c<n-r-1){
                cout<<" ";
            }
            else if(k<2 * r + 1){
                if(k==0 || k==2*r){
                    cout<<"*"; 
                }
                else{
                    cout<<" ";
                }
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int r=0;r<n;r++){
        for(int c=0;c<r;c++){
            cout<<" ";
        }
        for(int c=0 ;c<2*n-2*r-1; c++){
            if(c==0||c==2*n-2*r-2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}