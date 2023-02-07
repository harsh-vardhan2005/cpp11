#include<iostream>
using namespace std;

//array must be sorted(increasing/decreasing)
int BinarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
//use this formula so that we can avoid error while runing test case;
    int mid = start + (end-start)/2; 
    while(start<=end){
        if(arr[mid]<key){
            start = mid + 1;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }
        else{
            return mid;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}


int main(){

    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int arr[100];
    cout<<"Enter the elemnts of array"<<endl;
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the value to be searched"<<endl;
    cin>>key;

    cout<<BinarySearch(arr,size,key)<<endl;

    return 0;
}