#include <iostream>
#include <vector>
using namespace std;
vector<int> sorting(vector<int> arr1,vector<int> arr2){
    int i = 0;
    int j = 0;
   vector< int> ans;
    int n = arr1.size();
    int m = arr2.size();
while(i < n && j < m){
     if(arr1[i]<arr2[j]){
        ans.push_back(arr1[i]);
        i++;

     }
     else{
        ans.push_back(arr2[j]);
        j++;
     }
     
}
while(i<n){
    ans.push_back(arr1[i]);
    i++;
}
while(j<m){
    ans.push_back(arr2[j]);
    j++;
}
return ans;

}
int main(){
  
    vector<int> arr1 = {1,2,3,4};
    vector<int> arr2= {3,4,5};
    vector<int> ans = sorting(arr1,arr2);
    for(int val: ans){
        cout<<val<<" ";
    }

    return 0;
}