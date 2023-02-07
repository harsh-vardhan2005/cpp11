#include<iostream>
using namespace std;



void LargetRowWiseSum(int arr[3][3]){
    int min = INT8_MIN;
    int index = 0;

    for(int i = 0; i<3; i++){
        int rsum = 0;
        for(int j = 0; j<3; j++){
            rsum = rsum + arr[i][j];
            if(rsum>min){
                min = rsum;
                index = i;
            }
        }

    }
    cout<<"Row "<<index<<" "<<min<<" ";
}




int main(){
    int arr[3][3] = {{1,2,3},{4,5,9},{7,8,0}};
    LargetRowWiseSum(arr);
    return 0;
}