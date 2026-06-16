#include <iostream>
using namespace std;

int main(){
int arr[] = {9,3,7,22,98,36,46,2,99,66};
int n = sizeof(arr) / sizeof(arr[0]);
for(int i = 0;i<n-1;i++) {
    for(int j = 0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }

} 
for(int i = 0;i<n;i++){
    cout<<arr[i] <<" ";
}

    return 0;
}