#include<iostream>
using namespace std;


// void printArray(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// int duplicate(int arr[], int n)
// {
//     for(int i = 0; i<n; i++)
//     {
//         for(int j = i + 1; j<n; j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 return arr[i];
//             }
//         }
//     }
//     return -1;
// }

int duplicate(int arr[], int n){
    int a = 0;
    for(int i = 0; i<n; i++){
        a = a^arr[i];
        // cout<<a<<" ";
    }
    for(int i = 1; i<n; i++){
        a = a^i;
        // cout<<a<<" ";
        // return a;
    }
    return a;
}



int main()
{
    int len;
    cin>>len;
    int arr[100];
    for(int i = 0; i<len; i++)
    {
        cin>>arr[i];
    }
    cout<<duplicate(arr,len);
    return 0;
}