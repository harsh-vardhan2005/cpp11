#include<iostream>
using namespace std;
// #include "Hero.cpp"



class Hero{

    private://can only access in class;

    int health;

    //settter & getter, to access private class in main function
    //getter - to fetch
    //setter - can apply condition

    public://can access in class as well as main function;
    char level;

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

    //static allocation

    Hero a;
    a.setHealth(80);
    a.setLevel('A');
    cout << "level is " << a.level << endl;
    cout << "health is " << a.getHealth() << endl;
    cout<<endl;


    //dynamic allocation

    Hero *b = new Hero;
    (*b).setHealth(100);
    (*b).setLevel('B');

    cout << "level is " << (*b).level << endl;
    cout << "health is " << (*b).getHealth() << endl;
    cout<<endl;

    //can use b-> instead of  (*b)

    b->setHealth(120);
    b->setLevel('C');
 
    cout << "level is " << b->level << endl;
    cout << "health is " << b->getHealth() << endl;

    


    return 0;

} 