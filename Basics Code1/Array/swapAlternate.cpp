#include<iostream>
using namespace std;



void input(int arr[], int n){
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
}


void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



void swapAlternate(int arr[], int n){
    for(int i = 0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}



int main(){

    int arr[100];
    int len;
    cin>>len;
    input(arr,len);
    swapAlternate(arr,len);
    printArray(arr,len);

    return 0;

}