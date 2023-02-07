#include<iostream>
using namespace std;



class Hero{
    
    private:
    int health;

    public:
    char level;

    char getLevel(){
        return level;
    }

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};



int main(){
    Hero a;
    a.level = 'A';
    a.setHealth(80);
    cout<<a.getHealth()<<endl;
    cout<<a.level<<endl;
    return 0;
}