#include<iostream>
using namespace std;
// #include "Hero.cpp"



class Hero{

    private:
    int health;
     

    public:
    char level;


    // Default Constructor
    Hero(){
        // cout << "Constructor Called" << endl;
    }

    //Parameterised Construtctor

    Hero(int health){
        this -> health =  health;
    }

    Hero(int health,char level){
        this -> level = level;
        this -> health = health;
    }


    void print(){
        cout << level << endl;
    }


    int getHealth(){
        return health;
    }

 
    char getLevel(){
        return level;
    }


    void setHealth(int h){
        health =  h;
    }


    void setLevel(char ch){
        level = ch;
    }

};



int main(){

    // the default constructor will be disappeared if we create an parametrised constructor
    // so, we have to declared constructor too

    
    //object created statically
    Hero ramesh(10,'Q');

    ramesh.print();
     

    // cout << "Address of ramesh" << &ramesh <<endl;


    //dynamically
    Hero *h = new Hero(11);
    h->print();

    Hero temp;
    temp.print();


    return 0;

} 