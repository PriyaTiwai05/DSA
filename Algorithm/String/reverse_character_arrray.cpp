#include <iostream>
#include <cstring>
using namespace std;


int main(){
   char str[]={'a','b','c','d','\0'} ;
   int n = strlen(str);
   int st = 0,e=n-1;
   while(st<e){
    swap(str[st],str[e]);
    st++;
    e--;

   }
cout<<str<<" ";
    return 0;
}