// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int secondSmallest(vector<int>arr){
    int l=INT_MAX;
    int s=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<l){
            s = l;
            l = arr[i];
        }else if(arr[i]<s && arr[i]>l){
            s = arr[i];
        }
        
    }
    return s;
}
int main(){
    vector<int>v{-1,1,4,7,3,8,2};
    int findSecSmallest = secondSmallest(v);
    cout<<"The second smallest is "<<findSecSmallest;
}