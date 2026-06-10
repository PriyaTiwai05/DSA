#include <iostream>
using namespace std;

int main(){
   int arr[5]={2,3,4,5,6};
   int *p = arr;
   for(int i= 0;i<5;i++){
    cout<<"VALUES ARE "<<*(p+i)<<" "<<endl;
    
}

    return 0;
}