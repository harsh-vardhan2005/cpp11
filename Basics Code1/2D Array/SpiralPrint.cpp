#include<iostream>
using namespace std;

void Spiral(int arr[3][3]){


    int rstart = 0;
    int rend = 3;
    int cstart = 0;
    int cend = 3;
    int total = rend * cend;
    int count = 0;

    while(count<total){
        for(;rstart<rend; rstart++){
            for(;cstart<cend; cstart++){
                cout<<arr[rstart][cstart]<<" ";
            }
        
        }
    }


}


int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    Spiral(arr);
    return 0;
}