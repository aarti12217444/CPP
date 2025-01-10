#include<iostream>
#include<climits>//INT_MIN and INT_MAX
using namespace std;
// bool find(int arr[],int size, int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key)
//             return true;
//     }
//             return false;
// }

int main(){
    //FIND MAXIMUN NUMBER/MINIMUN NUMBER
    // int arr[]={1,2,3,4,5,6,7,8,9,10};
    // int size=10;
    // // int maxNum=INT_MIN;
    // int minNum=INT_MAX;
    // // int maxNum=-1;
    // for(int i=0;i<size;i++){
    //     if(arr[i]<minNum){
    //         minNum=arr[i];
    //     }
    // }
    // // cout<<"MAXIMUN NUMBER is: "<<minNum<<endl;
    // cout<<"Minumim NUMBER is: "<<minNum<<endl;
    
    
    // int arr[7]={10,20,30,40,50,60,70};
    // int size=7;
    // int start=0;
    // int end=size-1;
    // while(true){
    //     if(start>end)
    //         break;
    //     if(start==end){
    //         cout<<arr[start]<<" ";
    //     }else{
    //     cout<<arr[start]<<" ";
    //     cout<<arr[end]<<" ";
    //     }
    //     start++;
    //     end--;
    // }
    
    
    //REVERSE AN ARRAY
    int arr[7]={10,20,30,40,50,60,70};
    int size=7;
    int start=0;
    int end=size-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    
    
    //COUNT NUMBER OF 0'S AND 1'S 
    // int arr[]={1,0,1,0,0,0,1,1,1,1,0};
    // int size = 11;
    // int numZero = 0;
    // int numOne = 0;
    
    // for(int i=0;i<11;i++){
    //     if(arr[i]==0){
    //         numZero++;
    //     }
    //     if(arr[i]==1){
    //         numOne++;
    //     }
    // }
    // cout<<"Number of zeros: "<<numZero<<endl;
    // cout<<"Number of Ones: "<<numOne;
    
    
    // int arr[]={3,4,5,6,7};
    // int size=5;
    
//     int key=5;
//     bool flag=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             flag =1;
//             break;
//     }
// }
//     if(flag){
//         cout<<"Present";
//         }
//         else{
//             cout<<"Absent";
//         }
    
    
    
    // cout<<"Enter the key number: ";
    // int key;
    // cin>>key;
    
    // if(find(arr,size,key)){
    //     cout<<"Euderica";
    // }else{
    //     cout<<"not found";
    // }

    return 0;
}