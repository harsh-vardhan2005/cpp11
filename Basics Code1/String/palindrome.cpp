#include<iostream>
using namespace std;


bool checkPalindrome(char arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}


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
    // revString(arr,len);
    // printString(arr,len);
    bool ans = checkPalindrome(arr,len);
    cout<<ans;
    return 0;
}