#include<iostream>
using namespace std;


void TakingInput(int arr[3][4]){
    //row wise input;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cin>>arr[i][j];
        }
    }
}

void PrintArray(int arr[3][4]){
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){

    int arr[3][4];


    TakingInput(arr);
    PrintArray(arr);

    
    return 0;
}