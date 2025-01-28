#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int firstOccurance(vector<int> arr,int target){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    int ans  =-1;
    while(s<=e){
        if(target == arr[mid]){
            ans = mid;
            e = mid - 1;
        }
        else if(target > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }    
    return ans;
}
int lastOccurance(vector<int> arr,int target){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    int ans  =-1;
    while(s<=e){
        if(target == arr[mid]){
            ans = mid;
            s = mid + 1;
        }
        else if(target > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }    
    return ans;
}

int main()
{
vector<int>v{12,34,56,56,56,56,56,56,78,90,90};
int target = 56;
int firstOcc = firstOccurance(v,target);
int lastOcc = lastOccurance(v,target);
int totalOcc = lastOcc - firstOcc +1;
cout<<"Number of total occurange of " << target <<" element is " << totalOcc;
    return 0;
}