#include<iostream>
using namespace std;


void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int len;
    cin>>len;
    int arr[100];
    for(int i = 0; i<len; i++){
        cin>>arr[i];
    }
    reverse(arr,len);
    printArray(arr,len);
    return 0;
}