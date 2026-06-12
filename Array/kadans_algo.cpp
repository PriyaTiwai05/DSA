#include <iostream>
using namespace std;

int main(){
    int n = 6;
    int arr[6]={-1,-2,-3,4,5,8};
    int maxSum=INT16_MIN;
    for(int st=0;st<n;st++){
      int  currSum = 0;
        for(int end=st;end<n;end++){
          currSum += arr[end];
          maxSum = max(currSum,maxSum);
          if(currSum<0){
            currSum = 0;
          }
        }
       
    }
    cout<<"Max subArray sum "<<maxSum<<endl;
    return 0;
}