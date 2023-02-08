#include<iostream>
#include<vector>
using namespace std;




int main(){


    vector<int> arr{10,11,12,13,14};

    //Adding an element

    arr.push_back(1);//will add element at the end
    arr.emplace(arr.begin(),2); //will add element at position 0
    arr.insert(arr.begin()+2,3); //will add element at position 0+2=2


    cout << "updated arr is" << endl;

    for(int i : arr){
        cout << i << " ";
    }

    cout << endl;

    //Access elements of an vector

    vector<int> arr1{1,2,3,4,5};

    cout << "Element at Index 0 is " << arr1.at(0) << endl;
    cout << "ELement at Index 1 is " << arr[1] << endl;

    // cout << arr1[6] << endl; // gives garbage value
    // cout << arr1.at(6) << endl; // throws an exception

    //Change an element of an vector

    cout << "updated arr is " << endl;
    arr1.at(0) = 1;
    for(int i : arr1){
        cout << i << " ";
    }
    cout << endl;

    //Delete an element in an vector

    arr1.pop_back();
    for(int i : arr1){
        cout << i << " ";
    }
    cout << endl;


    return 0;
}