#include<iostream>
using namespace std;




int main(){


    int first,second;//define two int variable
    int *mypointer;//define an pointer

    cout << mypointer << endl; //adress of an pointer

    mypointer = &first;  // adress of first = mypointer

    *mypointer = 10;  // first = 10

    mypointer = &second; // adress of second = mypointer

    *mypointer = 20; // second = 20

    cout << first << " " << second;


    return 0;
}