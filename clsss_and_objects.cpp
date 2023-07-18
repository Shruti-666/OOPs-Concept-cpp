//object oriented programming revolves around OBJECT
//object is an entity that have some state/property ans behaviour
//Object is an instance of Class


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
    Hero h1;

    cout<<" Size: "<<sizeof(h1)<<endl;
    cout<<"Value :"<<h1.val<<endl;
    h1.setHealth(70);
    cout<<h1.getHealth();
}