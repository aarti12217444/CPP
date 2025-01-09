#include<iostream>
// #include<cstring>
using namespace std;
//ARRAY && FUNCTION

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void inc(int arr[],int size){
        arr[0]= arr[0] + 10;
        
        printArray(arr,size);
    }
int main(){
    
    int arr[]={3,4};
    int size=2;
    inc(arr,size);
    printArray(arr,size);
    //declaration
    // int arr[53];
    // char a[106];
    // bool b[12];
    // cout<<arr<<" "<<a<<" "<<b<<endl;
    // cout<<"Array create successfully";
    
    //initallization
    // int arr[]={1,2,3,4,5};
    // int aarr[4]={1,2,3,4};
    
    //bad practice
    // int n;
    // cin>>n;
    // int arr[n];
    // int arr[4]={1,2,3,4};
    // char a[10]={'a','b','c','d'};
    // cout<<"Array initallize successfully";
    
    // int arr[]={1,2,3,4};
    // // cout<<arr[2];
    // for(int i=0;i<4;i++){
    //     cout<<arr[i]<<" "<<endl;
    // }
    // int arr[10];
    // cout<<"Enter array elements"<<endl;
    
    // for(int i=0; i<10;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Print array elements"<<endl;
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }
    
    // int arr[3];
    // for(int i=0;i<3;i++){
    //     cin>>arr[i];
    // }
    // //double the elements
    // for(int i=0;i<3;i++){
    //     cout<<arr[i]*2<<" ";
    // }
    
    
    // int arr[4]={1,2,3,4};
    // for(int i=0;i<4;i++){
    //     arr[i]=1;
    // }
    // for(int i=0;i<4;i++){
    //     cout<<arr[i]<<" ";
    // }
    
    //method to print same elements instead of diffelent elements of same data type
    //1st method(FILL)
    // int arr[5];
    // fill(arr,arr + 5,2);
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    
    //2nd method(memset)(#include<cstring>) ka use hota hain aur, only 0 and -1 ke liye he hota h
    // memset(arr, -1 , sizeof(arr));
    // for(int i=0; i<5;i++){
    //     cout <<arr[i]<<" ";
    // }
    return 0;
}