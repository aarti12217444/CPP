#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int ans = (sizeof(arr))/(sizeof(int));
    cout<<ans<<endl;
    
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    
    arr.push_back(20);
    arr.push_back(10);
    arr.push_back(30);
    arr.push_back(400);
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    arr.pop_back();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<int>brr(n,-8);
    
    cout<<"Size of n is:"<<brr.size()<<endl;
    cout<<"capacity of n is:"<<brr.capacity()<<endl;
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    
    //printing vector elements
    vector<int>crr{10,20,30,40};
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Vector crr in emptyor or not :"<<crr.empty()<<endl;
    return 0;
}