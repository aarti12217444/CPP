#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int>arr{0,0,1,1,0};
    vector<int>ans;
    int start = 0;
    int end= arr.size()-1;
    int i=0;
    while(start<=end){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }else{
            swap(arr[i],arr[end]);
            end--;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    // vector<int>arr{2,7,11,15};
    // int target=9;
    // for(int i=0;i<arr.size();i++){
    //     int a=arr[i];
    //     for(int j=i+1;j<arr.size();j++){
    //         if(a + arr[j]==target){
    //             cout<<a<<" "<<arr[j];
    //         }
    //     }
    // }
    
    
    // vector<int>twoSum(vector<int>& nus, int target){
    //     int n=nums.size();
    //     for(int i=0;i<n-1;i++){
    //         for(int j=i+1;j<n;j++){
    //             if(nums[i] +nums[j]==target){
    //                 return[i,j];
    //             }
    //         }
    //     }
    // }
    
    
    // vector<int>arr{1,2,3,4,5};
    // int sum=5;
    // vector<int>arr{2,-3,3,3,-2};
    // int sum=0;
    // for(int i=0;i<arr.size();i++){
    //     int elem1=arr[i];
    //     for(int j=i+1;j<arr.size();j++){
    //         if(elem1 + arr[j]==sum){
    //             cout<<elem1<<", "<<arr[j]<<endl;
    //             break;
    //         }
    //     }
    // }
    
    
    // vector<int>arr{1,2,2,2,3,4};
    // vector<int>brr{2,2,3,3};
    // vector<int>ans;
    // for(int i=0;i<arr.size();i++){
    //     int element = arr[i];
    //     for(int j=0;j<brr.size();j++){
    //         if(element==brr[j]){
    //             ans.push_back(brr[j]);
    //             brr[j]=-1;
    //             break;
    //         }
    //     }
    // }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    
    
    return 0;
    



}

