/*
Vectors are the same as dynamic arrays with the ability to resize itself automatically
when an element is inserted or deleted, with their storage being handled automatically by the container.
*/

#include<iostream>
#include<vector>
using namespace std;



int main(){

    vector<int> arr;
    //Input
    for(int i = 1; i<=5; i++){
        arr.push_back(i);
    }

    //Output
    for(auto i = arr.begin(); i!=arr.end(); ++i){
        cout << *i << " ";
    }

    cout<<endl;

    //Reverse
    for(auto i = arr.rbegin(); i!=arr.rend(); ++i){
        cout << *i << " ";
    }
    return 0;


}