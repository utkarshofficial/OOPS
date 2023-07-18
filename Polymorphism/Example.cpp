#include<iostream>
#include<cstdlib>
using namespace std;

class We{
public:
    virtual void give(){
        cout<<"Kinderjoy\n";
    }
};
class Girl: public We{
public:
    void give() override {
        cout<<"Pink Kinderjoy\n";
    }
};
class Boy: public We{
public:
    void give() override {
        cout<<"Blue Kinderjoy\n";
    }
};

int main(){
    We* we = NULL;
    Girl g;
    Boy b;
    
    // runtime
    for(int i=0;i<10;i++){
        bool boy = rand()%2;
        if(boy){
            we = &b;
        }else{
            we = &g;
        }
        we->give();
    }

    // we = &g;
    // we->give();

    // we = &b;
    // we->give();
    return 0;
}