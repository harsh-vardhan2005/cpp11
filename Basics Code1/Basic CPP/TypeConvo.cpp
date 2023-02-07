#include<iostream>
using namespace std;



int main(){

    //Implicit type conversion
    int x = 9;
    double l;
    l=x;
    cout << sizeof(x) << endl;
    cout << sizeof(l) << endl;

    //Explicit type conversion

    //1) C style

    int y = 9;
    double z;
    z = (double)y;

    cout << sizeof(y) << endl;
    cout << sizeof(z) << endl;


    //2) Function-style

    int yz = 9;
    double zx;
    zx = double(yz);

    cout << sizeof(yz) << endl;
    cout << sizeof(zx) << endl;



    return 0;
}