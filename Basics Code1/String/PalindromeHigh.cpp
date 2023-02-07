#include<iostream>
using namespace std;



char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char arr[], int n){
    int start = 0;
    int end = n - 1;
    while(start<=end){
        if((toLowercase(arr[start])) != toLowercase(arr[end])){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}



int getLength(char arr[])
{
    int count = 0;
    for(int i = 0; arr[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char arr[],int n)
{
    int start = 0;
    int end = n - 1;
    swap(arr[start],arr[end]);
    start++;
    end--;
}


int main()
{
    char arr[100];
    cin>>arr;
    int len = getLength(arr);
    bool ans = checkPalindrome(arr,len);
    cout<<ans;

    return 0;
}