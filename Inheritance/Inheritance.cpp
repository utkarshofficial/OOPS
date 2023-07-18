#include<iostream>
using namespace std;

// Why
// Code Reusability
// Reduce Duplicate Code
// Better Organization of Code 

class GenericWatch{
protected:
    int display,ratio,size;
    int quantity,color;
    bool calling,gps,herat,spo2;
public:
    GenericWatch(){
        cout<<"Generic Constructor Called\n";
    }
    GenericWatch(int quantity,bool gps)
        :quantity(quantity),gps(gps){
        cout<<"Generic Parameterized Called\n";
    }
    ~GenericWatch(){
        cout<<"Generic Destructor Called\n";
    }
    void showType(){
        cout<<"Generic\n";
    }
};

class Firebolt{
public:
    Firebolt(){
        cout<<"Firebolt Created\n";
    }
    ~Firebolt(){
        cout<<"Firebolt Destroyed\n";
    }
    class Branding{
        string brading,marketing,offer;
        int budget;
    public:
        Branding(){
            cout<<"Branding Created\n";
        }
        Branding(int budget)
        :budget(budget){
            cout<<"Branding Parameterized Created\n";
        }
        ~Branding(){
            cout<<"Branding Destroyed\n";
        }
    };  
    class Model{
        string model,version,newFeatures,strap,gadgetType;
    public:
        Model(){
            cout<<"Model Created\n";
        }
        Model(string strap,string gadgetType)
        :strap(strap),gadgetType(gadgetType){
            cout<<"Model Parameterized Created\n";
        }
        ~Model(){
            cout<<"Model Destroyed\n";
        }
    };
    class Watch: protected Branding, protected Model, protected GenericWatch{
    public:
        Watch(){
            cout<<"Watch Created\n";
        }
        Watch(int quantity)
            :Model("red","watch"),Branding(7000000),GenericWatch(2000,false){
            cout<<"Watch Parameterized\n";
        }
        ~Watch(){
            cout<<"Watch Destroyed\n";
        }
    };
};

int main(){
    Firebolt::Watch ninjaCalling(10);
    cout<<endl;
    return 0;
}


