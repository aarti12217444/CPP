#include <iostream>
#include<string.h>
using namespace std;
void replaceSpaces(char sen[]){
    int i=0;
    int n=strlen(sen);
    for(i=0;i<n;i++){
        if(sen[i]==' '){
            sen[i]='@';
        }
    }
}
int main()
{
    char sen[100];
    cin.getline(sen,100);
    replaceSpaces(sen);
    cout<<"Printing statement: "<<endl<<sen<<endl;
    // std::cout<<"Hello World";

    return 0;
}