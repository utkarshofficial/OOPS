#include<iostream>
using namespace std;

class Base{
public:
    virtual void show(){
        cout<<"Base";
    }
};

class Derived1: public Base{
public:
    void show() override {
        cout<<"Derived1\n";
    }
};

class Derived2: public Base{
public:
    void show() override {
        cout<<"Derived2\n";
    }
};

int main(){

    Base * bptr = NULL;
    
    bptr = new Derived1();
    bptr->show();

    bptr = new Derived2();
    bptr->show();

    return 0;

    

}