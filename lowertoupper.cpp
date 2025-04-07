#include <iostream>
#include<string.h>
using namespace std;
void changeIntoUpperCase(char word[]){
    // int i=0;
    // int j=getLength(word);
    int j=strlen(word);
    for(int i=0;i<j;i++){
        word[i]=word[i]-'a'+'A';//word[i]-'A'+'b'(in case of upper to lower)
    }
}
int main()
{
    char word[100]="as";
    changeIntoUpperCase(word);
    cout<<"After changing: "<<word<<endl;
    return 0;
}