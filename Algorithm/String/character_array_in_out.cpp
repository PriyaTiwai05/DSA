#include <iostream>
using namespace std;

int main(){
    char str[12];
    cout<<"enter char array : ";
    cin.getline(str,12);
    for(char ch: str){
        cout<<ch<<" ";
    }
    int len = 0;
    for(int i = 0;i<str[i] != '\0';i++){
        len++;
    }
    cout<<"length "<<len<<endl;
    return 0;
}