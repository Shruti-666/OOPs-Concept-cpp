#include<iostream>
using namespace std;


//whenever an object is created , a constructor is called
//constructor -> 1. np return type, 2. can have no input parameter
class Hero{
    public:
    Hero(){
        cout<<"Constructor called"<<endl;
    }
};


int main(){
    cout<<"Hello"<<endl;
    //object created statically
    Hero h1; //constructor called by this command

    //dynamic
    Hero *h = new Hero();

}