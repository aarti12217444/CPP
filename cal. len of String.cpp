#include <iostream>
#include<string>
using namespace  std;

 //cal. Length
int getLength(char name[100]){
    int l=0;
    int i=0;
    while(name[i]!='\0'){
        l++;
        i++;
    }
    return l;
}

int main()
{
    //cal. Length
    char name[100];
    cin>>name;
    cout<<"Length is: "<<getLength(name);
    
   
   
//   char name[100];
//   cout<<"Enter your name: "<<endl;
//   cin>>name;
//   cout<<"Tohar naam "<<name<<" hau.";

// char ch[100];
// ch[0]='a';
// ch[1]='t';
// cin>>ch[2];
// cout<<ch[0]<<ch[1]<<ch[2];

// char name[100];
// cin>>name; iska use nhi kr skte kyuki cin space,enter ya \t tab ke baad ka chharacter read nhi krta
// cin.getline(name,50);//ye function ka use hum char mein krte hein pure output ke liye.
// cout<<name;


    return 0;
}