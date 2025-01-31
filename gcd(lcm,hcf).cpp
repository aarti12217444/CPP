#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a != b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int lcm(int a, int b){
    return(a,b)/gcd(a,b);
}
int main(){
    int a,b;
    cout<<"Enter two integer value: "<<endl;
    cin>>a>>b;
    int findGcd=gcd(a%b,b);
    int findlcm=lcm(a,b);
    cout<<"GCD of the number "<<a<<" and "<<b<<" is "<<findGcd<<endl;
    cout<<"LCM of the number "<<a<<" and "<<b<<" is "<<findlcm;
    return 0;
}