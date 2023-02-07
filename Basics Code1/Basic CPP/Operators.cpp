#include<iostream>
using namespace std;


int main(){

    //Increment - pre v/s post

    int a = 5;

    int b = ++a;

    cout << a << endl;
    cout << b << endl;

    int ab = 5;
    int c =  ab++;
    
    cout << ab << endl;
    cout << c << endl;


    return 0;
}