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

    void setHealth(int h,string name){

        //setting password
        if(name=="somya"){
            health =  h;
        }  

    }

    void setLevel(char ch){
        level = ch;
    }
};



int main(){

    Hero ramesh;

    ramesh.level = 'A';
    string password = "somya";
    //is password is wrong it will throw an grabage value 
    ramesh.setHealth(45,password);//use setter



    cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;//use getter



    // cout<<"health is: "<<ramesh.health<<endl;

    cout<<"Level is: "<<ramesh.level<<endl;

    return 0;

} 