#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int arr1(int arr[]){
    int sum = 0;
    for(int i = 0; i<5; i++){
        sum+=arr[i];
    }
    return sum;
}

// void any(int arr[]){
//     arr[0] = 55;
// }

int main(){


    int arr[100];
// taking input
    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }

    cout<<arr1(arr);
// printing an array
    // for(int i = 0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[100] = {1,2,3,4};

    // cout<<" 1st "<<arr[0]<<endl;
    // any(arr);
    // cout<<" 2nd "<<arr[0]<<endl;

    return 0;
}