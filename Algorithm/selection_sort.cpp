#include <iostream>
#include <vector>
using namespace std;
vector<int> selectionSort(vector<int> num ){
    int n = num.size();
    for(int i = 0;i<n-1;i++){
        int smallestIndex = i;
        for(int j = i +1; j<n;j++){
            if(num[j]<num[smallestIndex]){
                smallestIndex=j;
            }
            
        }
        swap(num[i],num[smallestIndex]);
    }
    return num;
}

int main(){
 vector<int> num = {4,1,5,2,3} ;
vector<int> ans = selectionSort(num);
 for(int val: ans){
    cout<<val<<" ";
 } 
 
    return 0;
}