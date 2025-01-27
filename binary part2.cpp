#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

///LAST OCCURANCE
int lastOccurance(vector<int>arr, int target){
    int s=0;
    int e=arr.size()-1;
    int ans  =-1;
    int mid = s+(e-s)/2;
    
    while(s<=e){
        if(target==arr[mid]){
            ans=mid;
            s=mid+1;
        }else if(target<arr[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

//FIRST OCCURANCE
// int firstOccurance(vector<int> arr, int target){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;
//     int ans= -1;
//     while(s<=e){
//         if(arr[mid]==target){
//             ans= mid;
//             e=mid-1;
//         }
//         else if(target>arr[mid]){
//             s=mid+1;
//         }
//         else if(target<arr[mid]){
//             e=mid -1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
int main()
{
    vector<int>v{2,5,67,67,90,34,34,67,67,67,67,23};
//     // int size=6;
    sort(v.begin(), v.end()); 
    int target=67;
//     int indexofFirstOccurance = firstOccurance(v,target);
    int ans = lastOccurance(v,target);
    cout<<"ans is "<<ans<<endl;
    
    auto ans2=lower_bound(v.begin(),v.end(),target);
    cout<<"ans2 is "<<ans2-v.begin()<<endl;
//     cout<<"ans is: "<<indexofFirstOccurance<<endl;
    return 0;
}