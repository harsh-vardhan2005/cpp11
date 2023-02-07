#include<iostream>
using namespace std;




int intersection(int arr1[], int n, int arr2[], int m){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr1[i]==arr2[j]){
                return arr1[i];
                arr2[j] = -1;
                break;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the length of 1st arrsy"<<endl;
    cin>>n;
    int arr1[100];
    cout<<"Enter the 1st array"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }

    int m;
    cout<<"Enter the length of 2nd array"<<endl;
    cin>>m;
    int arr2[100];
    cout<<"Enter the 2nd array"<<endl;
    for(int i = 0; i<m; i++){
        cin>>arr2[i];
    }

    cout<<intersection(arr1,n,arr2,m);
    return 0;
}