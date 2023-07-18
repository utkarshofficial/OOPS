#include<iostream>
using namespace std;

class Base{
public:
    Base(){
        cout<<"Base Constructor\n";
    }
    virtual ~Base(){
        cout<<"Base Destructor\n";
    }
    virtual void show(){
        cout<<"Base\n";
    }
};

class Derived: public Base{
public:
    Derived(){
        cout<<"Derived Constructor\n";
    }
    ~Derived(){
        cout<<"Derived Destructor\n";
    }
    void show(){
        cout<<"Derived\n";
    }
};


int main(){

    Base * bptr = new Derived();
    delete bptr;

    cout<<endl;
    return 0;

}