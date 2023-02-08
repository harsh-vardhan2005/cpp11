/*
Vectors are the same as dynamic arrays with the ability to resize itself automatically
when an element is inserted or deleted, with their storage being handled automatically by the container.
*/

#include<iostream>
#include<vector>
using namespace std;



int main(){

    //Vectors initialization

    vector<int> a1 = {1,2,3,4,5};
    vector<int> a2(5,12);
    vector<int> a3{5,6,7,8,9};


    for(const int& i : a1){
        cout << i << " ";
    }
    cout << endl;
    for(int i : a2){
        cout << i << " ";
    }
    cout<<endl;
    for(int i : a3){
        cout << i  << " ";
    }
    cout << endl;


    //Input
    vector<int> arr;
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