#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//using recursion
void revString(string arr,int n){
    if(n==0){
        return;
    }
    int end = n-1;
    cout<<arr[end];
    revString(arr,n-1);
}

//alternate

void revString1(string& arr,int i,int j){
    if(i>j){
        return;
    }
    swap(arr[i],arr[j]);
    i++;
    j--;
    // cout<<arr;
    revString1(arr,i,j);

}


int main(){
    string arr = "somya";
    cin>>arr;
    int n;
    cin>>n;
    revString(arr,n);
    // revString1(arr,0,arr.length()-1);
    cout<<arr;
    return 0;
}