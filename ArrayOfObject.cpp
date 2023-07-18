#include <iostream>
using namespace std;

class Product
{
private:
    int id, value;
    string name;

public:
    Product(int id = 0, int value = 100, string name = "None")
        :id(id),value(value),name(name){}
    ~Product()
    {
        cout << this << " Destructor\n";
    }
    void showDetails()
    {
        cout << id << endl;
        cout << value << endl;
        cout << name << endl;
        cout<<endl;
    }
    void getDetails(){

    }
    int getId(){
        return this->id;
    }
};

void showProductList(Product products[],int noOfProduct){
    cout<<"List of Product ->\n";
    for(int i=0;i<noOfProduct;i++){
        cout<<"No. "<<i+1<<endl;
        products[i].showDetails();
    }
}

void findProduct(Product products[],int noOfProducts,int id=0, int value=0, string name="None"){
    // loop and return product
    for(int i=0;i<noOfProducts;i++){
        if(products[i].getId() == id){
            cout<<"Product Found !!!\n";
            products[i].showDetails();
        }
    }
    cout<<"Not Fount ○\n";
}

int main()
{
    int n=10;
    Product products[10];
    for(int i=0;i<n;i++){
        products[i].getDetails();
    }
    showProductList(products,n);
    findProduct(products,n,10);

    return 0;
}