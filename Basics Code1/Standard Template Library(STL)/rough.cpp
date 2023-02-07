#include<iostream>
using namespace std;



void takinginput(int arr[],int n){
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
}

void reverse(int arr[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void print(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[100];
    int n;
    cin>>n;
    takinginput(arr,n);
    reverse(arr,n);
    print(arr,n);
    return 0;
    
}