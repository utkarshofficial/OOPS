#include<iostream>
using namespace std;

class {
    int a,b;
public:
    void show(){
        cout<<"Base";
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