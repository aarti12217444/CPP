#include<iostream>
using namespace std;

bool findKey(int arr[][3],int row,int cols, int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
        
    }
    return false;
}
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
     cout << "Matrix elements:\n";
    for(int i=0;i<3;i++){
       
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int key = 0;
    if(findKey(arr,3,3,key)){
        cout<<"True";
    }else{
        cout<<"FALSE";
    }
        return 0;   
}
