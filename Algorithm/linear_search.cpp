#include <iostream>
using namespace std;
int linearSearch(int arr[],int size,int target){
    for(int i = 0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
return -1;
}
int main(){
   int arr[]={4,2,7,9,55,3,1};
   int size = 7;
   int tagret = 9;
   cout<<linearSearch(arr,size,tagret)<<endl;
    return 0;
}