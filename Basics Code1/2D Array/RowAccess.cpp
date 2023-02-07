#include<iostream>
using namespace std;


// void TakingInput(int arr[3][4]){
//     //row wise input;
//     for(int i = 0; i<3; i++){
//         for(int j = 0; j<4; j++){
//             cin>>arr[i][j];
//         }
//     }
// }

void PrintArray(int arr[3][3]){
// row weise printing;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
    }

}

int main(){

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};



    // TakingInput(arr);
    PrintArray(arr);

    
    return 0;
}