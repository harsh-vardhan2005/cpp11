/*  
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int s = 1; s<=n-i; s++){
            cout << "  ";
        }
        
        for(int j = 1; j<=i; j++){
            cout << i+j-1 << " ";
        }

        int k = 2*i-2;
        for(int j = 2; j<=i; j++){
            cout << k << " ";
            k--;
        }
        cout << endl;
    }
    return 0;
}