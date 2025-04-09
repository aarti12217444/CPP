#include <iostream>
#include<string>
using namespace std;
int main()
{
    // string str;
    // cin>>str;
    // // getline(cin,str);//for space wala input e.g asdf ghjk
    // cout<<str;
    // cout<<str.empty()<<endl;
    // cout<<str.length()<<endl;
    // str.push_back('A');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str;
    // string a="aao";
    // string b="jaao";
    // if(a.compare(b)==0){
    //     cout<<"a and b are same"<<endl;;
    // }else{
    //     cout<<"a and b are not same"<<endl;
    // }
    // string x="abchdf";
    // string y="abchdf";
    // cout<<x.compare(y)<<endl;
    
    // string w="Welcom to the world of aarti.";
    // cout<<"Found at index: "<<w.find("ofs")<<endl;;
    // if(w.find("ofs")==string::npos){
    //     cout<<"Not found"<<endl;
    // }
    string q="This is my message to you, that you will die with in 2 days";
    string r="corona";
    q.replace(0,4,r);
    cout<<q;
    return 0;
}