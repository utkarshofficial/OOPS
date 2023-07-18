#include<iostream>
using namespace std;

// hasA
class HPi5{
public:
    int i5,ram8gb,hdd1tb,ssd256gb,windows10;
};

class AsusROG{
public:
    int i9,ram32gb,hdd2tb,ssd1tb,windows11,rtx4070;
};

class SNUTpc{
    HPi5 hp;
    AsusROG rog;
    int pro = rog.i9;
    int ram = rog.ram32gb;
    int os = hp.windows10;
};

int main(){

    
    return 0;
}