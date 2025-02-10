#include <iostream>
using namespace std;
int findSqrt(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int target=n;
    int ans=-1;
    while(s<=e){
        if(mid*mid==target){
        return mid;;
    }if(mid*mid>target){
        e=mid-1;
    }else{
        ans=mid;
        s=mid+1;
    }
    mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    
    int ans=findSqrt(n);
    cout<<"Ans "<<ans<<endl;
    
    int pre;
    cout<<"Enter the number of floating digits in pre: "<<endl;
    cin>>pre;
    
    double step=0.1;
    double finalAns=ans;
    for(int i=0; i<pre;i++){
        
        for(double j=finalAns;j*j<=n; j=j+step){
            finalAns=j;
        }
        step=step/10;
    }
    cout<<"Final ans: "<<finalAns<<endl;

    return 0;
}