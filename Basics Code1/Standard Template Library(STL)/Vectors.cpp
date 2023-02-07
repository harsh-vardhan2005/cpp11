/*
Vectors are the same as dynamic arrays with the ability to resize itself automatically
when an element is inserted or deleted, with their storage being handled automatically by the container.
*/

#include<iostream>
#include<vector>
using namespace std;



int main(){

    vector<int> arr;
    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<5; i++){
        cout<<arr[i];
    }
    return 0;


}