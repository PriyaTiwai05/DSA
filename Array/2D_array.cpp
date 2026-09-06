#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int matrix[4][3] = {{1,2,3},{4,5,6,},{7,8,9},{10,11,12}};
    int row = 4;
    int coloum=3;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<coloum;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}