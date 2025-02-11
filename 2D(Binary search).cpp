#include <iostream>
using namespace std;
bool binarySearch(int arr[][4],int rows,int cols,int target){
    int s=0;
    int e=rows*cols-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        int rowIndex=mid/cols;
        int colsIndex=mid%cols;
        
        if(arr[rowIndex][colsIndex]==target){
            cout<<"Found at: "<<rowIndex<<" "<<colsIndex<<endl;
            return target;
        }
        if(arr[rowIndex][colsIndex]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return false;
}
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int rows=3;
    int cols=4;
    int target=12;
    bool ans= binarySearch(arr,rows,cols,target);
    if(ans){
        cout<<"found";
    }else{
        cout<<"no";
    }
}