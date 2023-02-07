#include<iostream>
using namespace std;




// #USED XOR OPERATOR
// # X Y  O
// # 0 0  0
// # 0 1  1
// # 1 0  1
// # 1 1  0


int findUnique(int *arr, int size)
{
   	int a = 0;
    
    for(int i = 0; i<size; i++) {
        a = a^arr[i];
    }
    return a;
}

void input(int arr[], int n){
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
}

int main(){
    int arr[100];
    int len;
    cin>>len;
    input(arr,len);
    cout<<findUnique(arr,len);
    return 0;
}