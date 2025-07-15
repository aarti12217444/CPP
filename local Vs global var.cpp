#include<iostream>
using namespace std;
int x=7;//global var
void fun(){
    int x=9;
    cout<<x<<endl;
    ::x=10;
    cout<<::x<<endl;
}
int main(){
    ::x=4;
    int x=20;//local var
    cout<<x<<endl;
    cout<<::x<<endl;
    fun();
    return 0;
}