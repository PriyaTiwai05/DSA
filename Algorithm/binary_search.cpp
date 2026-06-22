#include <iostream>
#include <vector>
using namespace std;
//binary search always apply on sorted array
int binarySearch(vector<int> num,int target){
    int n = num.size();
    int st = 0,end = n-1;
    while(st<=end){
     //int   mid=(st+end)/2;
     int mid = st + (end - st)/2;//for overflow condition

     if(target>num[mid]){
        st = mid+1;
     }
     else if (target<num[mid])
     {
        end = mid - 1;
     }
     else{
        return mid;
     }
     
    }
    return -1;
} 
int main(){
    //odd term
    vector<int> num1 ={-1,0,3,4,5,9,12};
    int target1 = 12;
    cout<<binarySearch(num1,target1)<<endl;
    //even term
    vector<int> num2 ={-1,0,3,5,9,12};
    int target2= 0;
    cout<<binarySearch(num2,target2)<<endl;
    
    return 0;
}