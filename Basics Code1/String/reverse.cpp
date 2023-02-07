#include<iostream>
using namespace std;

int getlength(char arr[]){
    int n = 0;
    for(int i = 0; arr[i]!= '\0'; i++){
        n++;
    }
    return n;
}

void revString(char arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printString(char arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
}


int main(){
    char arr[100];
    cin>>arr;
    int len = getlength(arr);
    revString(arr,len);
    printString(arr,len);
    return 0;
}