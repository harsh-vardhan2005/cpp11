#include<iostream>
#include<vector>
#include<utility>
using namespace std;



int main(){

    //Creating pairs
    pair<int,int> p1 = {1,2};
    cout << p1.first << " " << p1.second << endl;


    //Nested Pairs
    pair<int,pair<int,int>> p2 = {1,{2,3}};
    cout << p2.first << " " << p2.second.first << p2.second.second << endl;

    //Swapping Pairs
    pair<char , int> first = {'A',1};
    pair<char , int> second = {'B',2};

    cout << " before swapping " << first.first << " " << first.second << endl;
    cout << " before swapping " << second.first << " " << second.second << endl;
    
    first.swap(second);
    cout << " before swapping " << first.first << " " << first.second << endl;  
    cout << " before swapping " << second.first << " " << second.second << endl;

    // array
    pair<int , int> arr[] = {{1,2},{3,4},{5,6}};

    cout << arr[0].first << " " << arr[0].second << endl;
    cout << arr[1].first << " " << arr[1].second << endl;
    cout << arr[2].first << " " << arr[2].second << endl;


    return 0;


}