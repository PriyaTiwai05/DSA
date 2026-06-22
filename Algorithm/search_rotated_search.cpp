#include <iostream>
#include <vector>
using namespace std;
//binary search always apply on sorted array
int binarySearch(vector<int> num,int target){
    int n = num.size();
    int st = 0,end = n-1;
    while(st<=end){
        int mid = st +(end-st)/2;
        if(num[mid]==target){
            return mid;
        }
        //left sorted
        if(num[st]<=num[mid]){
            if (num[st]<=target && target<=num[mid]){
            //left 
            end = mid-1;
        }
        else{
            //right
            st=mid+1;
        }
        }
      else{
        if (num[mid]<=target && target<=num[end]){
            st = mid +1;
        }
        else{
            end = mid -1;
        }
      }  

    } 
    return -1;
} 

int main(){
    
    vector<int> num1 ={5,9,12,-1,0,3,4};
    int target1 = 12;
    cout<<binarySearch(num1,target1)<<endl;
    
    return 0;
}