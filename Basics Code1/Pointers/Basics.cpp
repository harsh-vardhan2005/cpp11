#include<iostream>
using namespace std;

int main () {

    // int num  = 5 ;

    // cout << num << endl;

    // // // address of Operator - &

    // cout <<" address of num is " << &num << endl;

    // int *ptr = &num;

    // cout << "Address is : " << ptr << endl;
    // cout << "value is : " << *ptr << endl;

    // double d = 4.3;
    // double *p2 = &d;

    // cout << "Address is : " << p2 << endl;
    // cout << "value is : " << *p2 << endl;

    // cout << " size of integer is " << sizeof(num) << endl;
    // cout << " size of pointer is " << sizeof(ptr) << endl;
    // cout << " size of pointer is " << sizeof(p2) << endl;

   int num1 = 5;
//    int a = num1;

//    cout << "a before " << a << endl;
//    cout << "num before " << num1 << endl;
//    a++;
//    cout << "num after " << num1 << endl;
//    cout << "a after " << a << endl;


   int *p  = &num1;
//    cout << "before " << num1 << endl;
//    (*p)++;
//    cout << "after " << num1 << endl;

//     //copying a pointer
//    int *q = p;
//    cout << p <<" - " << q << endl;
//    cout << *p <<" - " << *q << endl;

   //important concept
   int i = 3;
   int *t = &i;
//    cout <<  (*t)++ << endl;
//    *t = *t +1;
//     cout << *t << endl;
    cout << " before t " << t << endl;
    t = t + 1;
    cout << " after t " << t << endl;




    return 0;
}