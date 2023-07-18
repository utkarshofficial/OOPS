#include<iostream>
using namespace std;

class Product{
private:
    int id,value;
    string name;

public:
    
    // Product(int id = 0, int value = 100, string name = "None")
    //     :id(id),value(value),name(name){}

    Product(int id = 0, int value = 100, string name = "None"){
        this->id = id;
        this->value = value;
        this->name = name;
    }

    void getAddress(){
        cout<<this<<endl;
    }

    void showDetails(){
        cout<<id<<endl;
        cout<<value<<endl;
        cout<<name<<endl;
    }
};

int main(){

    Product pc(1,30000,"HP");
    pc.showDetails();
    cout<<&pc<<endl;
    pc.getAddress();
    return 0;
}