#include<iostream>
#include<vector>
using namespace std;


int main(){
    // initialization
    vector<int> num1 = {1,2,3,4,5};
    vector<int> num2 {1,2,3,4,5};
    vector<int> num3(5,12);//(5 is size & 12 is the element)
    vector<int> num4 = {12,12,12,12,12};//num3 and num4 both are equal

    vector<int>::iterator iter;
    // for(int i = 0; i<num1.size(); i++){
    //     cout<<num3[i]<<" ";
    // }
    // int x = num1.begin();

    iter = num1.begin();


    cout<<*iter<<endl;
    iter = num1.begin()+1;
    cout<<*iter<<endl;
    iter = num1.begin()+2;
    cout<<*iter<<endl;

    int x = cout<<"Hi";




    




    return 0;
}