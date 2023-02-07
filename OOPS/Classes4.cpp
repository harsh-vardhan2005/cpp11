#include<iostream>
#include<string>
#include<string.h>
using namespace std;
// #include "Hero.cpp"



class Hero{

    private:
    int health;
     

    public:
    char level;
    char *name;


    // Default Constructor
    Hero(){
        name = new char[100]; 
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

    // copy constructor

    Hero(Hero& temp){
        cout << "copy constructor called" << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "Name: " << this-> name << " ,";
        cout << "Health: " << this-> health << " ,";
        cout << "Level: " << this-> level << " ,";
        cout << endl;
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

    void setName(char name[]){
        // strcpy=(this -> name, name);
    }

};



int main(){

    Hero h1;
    h1.setHealth(11);
    h1.setLevel('D');
    char name[7] = "Somya";
    h1.setName(name);
    h1.print(); 

    return 0;

} 