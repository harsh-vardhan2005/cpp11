/*
*       * 
 *     *  
  *   *   
   * *    
    * 
*/

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    for(int i = n; i>=1; i--){
        for(int s = 1; s<=n-i; s++){
            cout << " ";
        }
        for(int j = 1; j<=i; j++){
            if(i==1){
                cout << "*";
            }
            else if(j==1 || j==i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}