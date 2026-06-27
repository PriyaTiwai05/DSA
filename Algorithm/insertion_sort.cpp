#include <iostream>
#include <vector>
using namespace std;
vector<int> insertionSort(vector<int> num ){
    int n = num.size();
    for(int i = 1;i<n;i++){
        int curr = num[i];
        int prev = i -1;
        while(prev>=0 && num[prev]>curr){
            num[prev+1]= num[prev];
            prev --;
        }
        num[prev + 1]=curr;
    }
    return num;
}

int main(){
 vector<int> num = {4,1,5,2,3} ;
vector<int> ans = insertionSort(num);
 for(int val: ans){
    cout<<val<<" ";
 } 
 
    return 0;
}