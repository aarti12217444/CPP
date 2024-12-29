#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    
    //flipped solid diamond
    
    // for(int row=0;row<n;row++){
    //     //half pyramid
    //     for(int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }
    //     //space full pyradim
    //     for(int col=0;col<2*row+1;col++){
    //         cout<<" ";
    //     }
    //     //2nd half pyramid
    //     for(int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row++){
    //     //inverted half py.
    //     for(int col=0;col<row+1;col++){
    //         cout<<"*";
    //     }
    //     //space fullpy.
    //     for(int col=0; col<2*n-2*row-1;col++){
    //         cout<<" ";
    //     }
    //     //2nd half py.
    //     for(int col=0;col<row+1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    //Fancy pattern #2
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<< i+1;
    //         if(j!=i){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<n-i;
    //         if(j!=n-i-1){
    //             cout<<"*";
    //         }
            
    //     }
    //     cout<<endl;
    // }
    
    //Alphabet pelindorem py.
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<char('A' + 1);
        }
        cout<<endl;
    }
    
    //Alphabet py.
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i + 1; j++) {
    //         cout << char('A' + i); // Convert i to a letter starting from 'A'
    //     }
    //     cout << endl;
    // }
    
    

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
    // for(int r=0;r<n; r++){
    //     int k=0;
    //     for(int c=0;c<(n*2)-1; c++){
    //         if(c<n-r-1){
    //             cout<<" ";
    //         }
    //         else if(k<2 * r + 1){
    //             if(k==0 || k==2*r){
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
    // for(int r=0;r<n;r++){
    //     for(int c=0;c<r;c++){
    //         cout<<" ";
    //     }
    //     for(int c=0 ;c<2*n-2*r-1; c++){
    //         if(c==0||c==2*n-2*r-2){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
}