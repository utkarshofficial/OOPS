#include<iostream>
using namespace std;

class A{
public:
    int a=10,b=20;
    virtual void show() = 0;
};

class B:public A{
public:
    void show() override {
        cout<<"B\n";
    }
};
class C:public A{
public:
    void show() override {
        cout<<"C\n";
    }
};



int main(){
    // Piece *Queenb = new Queen('b');
    // Piece *Queenw = new Queen('w');
    // Piece *Rook = new Rook('w');
    // Piece *Pawn = new Pawn('w');
    // Piece *King = new King('b');

    A* a = new B();
    a->show();
    
    return 0;
}