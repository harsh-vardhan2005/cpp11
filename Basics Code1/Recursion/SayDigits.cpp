#include<bits/stdc++.h>
using namespace std;

void saydigit(int n,string numbers[]){
    if(n==0){
        return;
    }
    int digit = n%10;
    n = n/10;
    saydigit(n,numbers);
    cout<<numbers[digit]<<" ";
}


int main(){
    string numbers[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    saydigit(n,numbers);
    return 0;
}