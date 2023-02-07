#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int *p = (arr+3);
    cout<<*p;
    return 0;
}