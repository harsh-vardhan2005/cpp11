#include<iostream>
using namespace std;

int power(int n1, int n2){
    int ans = 1;
    for(int i = 1; i<=n2; i++){
        ans = ans * n1;
    }
    return ans;
}


int main(){
    int n1 , n2;
    cin>>n1>>n2;
    cout<<"Answer is "<<power(n1,n2)<<endl;
    return 0;
}