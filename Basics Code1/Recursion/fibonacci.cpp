#include<iostream>
using namespace std;


int Fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans = Fibonacci(n-1) + Fibonacci(n-2);
    return ans;
}


int main(){
    int n;
    cin>>n;

    int ans1 = Fibonacci(n);
    cout<<ans1<<endl;

    return 0;
}
