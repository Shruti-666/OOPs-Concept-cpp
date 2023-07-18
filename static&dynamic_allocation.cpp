#include<iostream>
using namespace std;

class Hero{
    //properties
    private: //cannot access outside the class
    int health=100;
    public:
    int val=10;

    void print(){ //see you can access private member inside the class 
        health=100;
        cout<<health;
    }

    int getHealth(){ //getter
        return health;
    }

    void setHealth(int h){ //setter
        health=h;
    }
};

int main(){
    Hero h1; //static allocation
    cout<<h1.val<<endl;
    cout<<h1.getHealth()<<endl;  

    Hero *h = new Hero; //dynamic allocation
    cout<<h->val<<endl;
    cout<<h->getHealth()<<endl;
}