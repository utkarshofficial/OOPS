#include <iostream>
using namespace std;

class Product
{
private:
    int id, value;
    string name;

public:
    // Product(int id = 0, int value = 100, string name = "None")
    //     :id(id),value(value),name(name){}

    Product(int id = 0, int value = 100, string name = "None")
    {
        this->id = id;
        this->value = value;
        this->name = name;
    }

    Product(Product &pro)
    {
        id = pro.id;
        value = pro.value;
        name = pro.name;
    }

    ~Product()
    {
        cout << this << " Destructor\n";
    }

    void showDetails()
    {
        cout << id << endl;
        cout << value << endl;
        cout << name << endl;
    }
    void address()
    {
        cout << this << endl;
    }
    // void operator = (Product &pc){
    //     this->id = pc.id;
    //     this->value = pc.value;
    //     this->name = pc.name;
    // }
};

int main()
{

    Product pc1;
    Product pc2;
    Product pc3;
    pc1.address();
    pc2.address();
    pc3.address();
    cout << endl;
    return 0;
}