#include <iostream>
using namespace std;
void revArray(int arr[],int sz){
    int start = 0,end = sz-1;
    while (start<end)
    {
       swap(arr[start],arr[end]);
        start++;
        end--;

       
    }
    
}
int main(){
    //reverse an Array
    int arr[]={1,2,3,4,5};
    int sz=5;
    revArray(arr,sz);
    for(int i = 0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
    return 0;
}