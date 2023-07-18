#include<iostream>
using namespace std;

class Home1{
public:
    void utkarsh(){
        cout<<"Utkarsh Real\n";
    }
};
class Home2: public Home1{
};
class Home3: public Home1{
public:
    void get(){
        cout<<"get\n";
    }
    void utkarsh(){
        cout<<"Other Utkarsh\n";
        Home1::utkarsh();
    }
};
class Type{};

int main(){

    // Home3 u;
    // simple call
    // u.utkarsh();

    // special call
    // u.Home1::utkarsh();

    Home3 h;
    h.utkarsh();
    return 0;
}