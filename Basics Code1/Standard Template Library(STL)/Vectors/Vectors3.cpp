/*
    Vector Iterators
*/


#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> num = {1,2,3};


    vector<int>::iterator iter;
    //iter points to num[0]
    iter = num.begin();
    //itter points to last element of num
    iter = num.end()-1;


    iter = num.begin(); 

    cout << "num[0] " << *iter << endl;
    iter = num.begin()+1;
    cout << "num[1] " << *iter << endl;
    iter = num.end()-1;
    cout << "num[2] " << *iter << endl;



    //Loops 

    vector<int> arr{4,5,6,7,8};
    // vector<int>::iterator iter;

    for(iter = arr.begin(); iter != arr.end(); iter++){
        cout << *iter << " ";
    }


    return 0;
}