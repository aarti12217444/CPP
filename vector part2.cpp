#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//UNIQUE ELEMENT
// int findUnique(vector<int> arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
int main(){
    
//     //PAIR SUM
    vector<int>arr{11,12,13,14,15};
    int sum=70;
    for(int i=0;i<arr.size();i++){

        int element=arr[i];
        
        for(int j=i+1;j<arr.size();j++){
            if(element+arr[j]==sum){
                cout<<"Pain found "<<element<<" ,"<<arr[j]<<endl;
            }
        }
    }
    //INTERSECTION
    // vector<int>arr={1,2,3,3,4};
    // vector<int>brr={2,3,3,4,5};
    
    // vector<int>ans;
    // for(int i=0;i<arr.size();i++){
    //     int element=arr[i];
    //     for(int j=0;j<brr.size();j++){
    //         if(element==brr[j]){
    //             //in case of duplicate value only we use this.
    //             brr[j]=-1;
    //             //*******
    //             ans.push_back(element);
    //         }
    //     }
    // }
    // for(auto value:ans){
    //     cout<<value<<" ";
    // }
    
    //UNION
    // int arr[]={1,3,5,7,9};
    // int sizea=5;
    // int brr[]={2,3,7,4,6,8};
    // // int c=INT_MIN;
    // int sizeb=4;
    
    // vector<int>ans;
    
    // for(int i=0;i<sizea;i++){
    //     ans.push_back(arr[i]);
    // }
    //  for(int i=0;i<sizeb;i++){
    //     //  brr[i]=-1;
    //     ans.push_back(brr[i]);
    // }
    // cout<<"Printling ans array: ";
    //  for(int i=0;i<ans.size();i++){
         
    //      //FOR DUPLICATE VALUE
    //     //  int value=0;
    //     //     if(value!=INT_MIN){
    //     //         ans.push_back(value);
    //     //     }
    //     //****************************
    //     cout<<ans[i]<<" ";
    // }
    
    //UNIQUE ELEMENT
    // int n;
    // cout<<"enter the size of n: ";
    // cin>>n;
    
    // vector<int>arr(n);
    // cout<<"Enter elements: "<<endl;
    // for(int i=0;i<arr.size();i++){
    //     cin>>arr[i];
    // }
    // cout<<endl;
    
    // int uniqueElem=findUnique(arr);
    // cout<<"unique element is: "<<uniqueElem;
    return 0;
}

