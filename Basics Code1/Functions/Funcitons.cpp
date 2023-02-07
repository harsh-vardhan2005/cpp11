#include<iostream>
using namespace std;



int value(int a){
    a = 7;
    cout << "Function called" << endl;
    cout << a << endl;
}

int main(){

    int a =5;

    cout <<  a << endl;

    value(a);

    cout <<  a << endl;


    return 0;
}