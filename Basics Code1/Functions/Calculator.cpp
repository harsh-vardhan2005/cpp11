#include<iostream>

using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Enter the operation"<<endl;
    cin>>op;
    switch(op){
        case '+' : cin>>a>>b;
                 cout<<a+b<<endl;
                 break;
        case '-' : cin>>a>>b;
                 cout<<a-b<<endl;
                 break;
        case '*' : cin>>a>>b;
                 cout<<a*b<<endl;
                 break;
        case '/' : cin>>a>>b;
                 cout<<a/b<<endl;
                 break;
        case '%' : cin>>a>>b;
                 cout<<a%b<<endl;
                 break;
        default : cout<<"Invalid Operation";
    }
    return 0;
}