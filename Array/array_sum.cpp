#include <iostream>
using namespace std;

int main(){
    int arr[3]={4,8,9};
    int sum = 0;
    int num = 0;
    int digit,add;
    for(int i = 0;i<3;i++)
    {
          sum +=arr[i];
         
    }
    cout<<sum<<endl;
    num = sum%10;
    digit = sum/10;
    add = num+digit;
    cout<<add<<endl;
return 0;
}