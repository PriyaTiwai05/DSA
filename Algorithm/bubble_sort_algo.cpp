#include <iostream>
#include <vector>
using namespace std;
vector<int> bubbleSort(vector<int> num ){
    int n = num.size();
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(num[j]>num[j+1]){
                swap(num[j],num[j+1]);
            }
        }
    }
    return num;
}

int main(){
 vector<int> num = {4,1,5,2,3} ;
vector<int> ans = bubbleSort(num);
 for(int val: ans){
    cout<<val<<" ";
 } 
 
    return 0;
}