#include<iostream>
using namespace std;


void total(int arr[], int n){
    for(int i = 0; i<n; i++){
    cin>>arr[i];
    }
    int add = 0;
    for(int i = 0; i<n; i++){
        add = add + arr[i];
    }
    cout<< "Sum of array is "<<add;
}

int main(){
    int size;
    cin>>size;
    int arr[50];
    total(arr,size);
    cout<<"hyburb"<<endl;
    return 0;
}