#include<iostream>
using namespace std;


// 1 2 3
// 4 5 6
// 7 8 9
// int row = 0;

void  waveprintarray(int arr[100][100],int n){
    for(int j = 0; j<n; j++){
        if(j%2==0){
            for(int i = 0; i<n; i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i = n-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        
        }
    }
}

int main(){

    int arr[100][100] = {{1,2,3},{4,5,6},{7,8,9}};
    waveprintarray(arr,3);
    return 0;

}