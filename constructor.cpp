#include<iostream>
using namespace std;


//whenever an object is created , a constructor is called
//constructor -> 1. np return type, 2. can have no input parameter
class Hero{
    int health,level;
    public:
    Hero(){//default constructor
        cout<<"Constructor called"<<endl;
    }

    //parameterized constructor
    //'this' stores the address of current object 
    //this is a pointer to the current object
    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this->health=health;
    }

    Hero(int health,int level){
        this->health=health;
        this->level=level;
    }


};


int main(){
    cout<<"Hello"<<endl;
    
    //object created statically
    Hero h1(10); //constructor called by this command
    cout<<"Address of Hero : "<<&h1<<endl;

    Hero temp(22,2);
    //dynamic
    Hero *h = new Hero();

}