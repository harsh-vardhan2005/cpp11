#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp = n;
    int revn = 0;
    while(n>0){
        revn = revn * 10 + (n%10);
        n/=10;
    }
    if(temp==revn){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
}