#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[]={'a','b','c','\0'};
    char str1[]="hello";
    
    cout<<str<<endl;
    cout<<strlen(str)<<endl;
    cout<<str1[2]<<endl;
    return 0;
}