#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> num){
    int n = num.size();
    
    int freq = 0, ans = num[0];
    for(int i = 0;i < n;i++){
        if(freq==0){
            ans = num[i];
        }
        
        if(ans==num[i]){
            freq++;
            
        }
        else{
            freq --;
        }
        return ans; 
    }
   
}
int main(){
vector<int> num = {1,1,2,1,3,2,1,};

cout <<" majority elemnet is "<<majorityElement(num);
   
     
    return 0;
}