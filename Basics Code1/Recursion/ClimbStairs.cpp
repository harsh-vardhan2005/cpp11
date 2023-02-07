#include<iostream>
using namespace std;



int ClimbStairs(int n){

    if(n<0){
        return 0;
    }

    if(n==0){
        return 1;
    }

    int secondlast = ClimbStairs(n-1);
    int thirdlast = ClimbStairs(n-2);
    return secondlast+thirdlast;

}


int main(){

    int n;
    cin>>n;

    int ans = ClimbStairs(n);
    cout<<ans<<endl;


    return 0;
}