#include <iostream>
#include<string.h>
using namespace std;
bool checkPalindrom(char word[]){
    int i=0;
    int n=strlen(word);
    int j=n-1;
    while(i<=j){
        if(word[i] != word[j]){
            return false;
        }else{
            i++;
            j--;
        }
        
    }
    return true;
    
}
int main()
{
    char word[100]="aw";
    cout<<"Check palindrom: "<<checkPalindrom(word)<<endl;
    
    // std::cout<<"Hello World";

    return 0;
}