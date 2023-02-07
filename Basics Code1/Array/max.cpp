#include<iostream>
using namespace std;

int getMax(int arr[], int n){
    int maxi = INT16_MIN;
    for(int i = 0; i<n; i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

int getMin(int arr[], int n){
    int mini = INT16_MAX;
    for(int i = 0; i<=n; i++){
        mini = min(mini,arr[i]);
    }
    return mini;
}


int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Maximum is "<<getMax(arr,size)<<endl;
    cout<<"Minimum is "<<getMin(arr,size)<<endl;

    return 0;
}