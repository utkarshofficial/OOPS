#include"Product.hpp"
#include<iostream>
using namespace std;

int main(){
    Product pc;
    pc.setDetails(1,1000);
    
    cout<<pc.getId()<<endl;
    cout<<pc.getValue()<<endl;


    return 0;
}