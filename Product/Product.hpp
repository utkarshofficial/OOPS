class Product
{
private:
    int id, value;

public:
    Product(int,int);
    void showDetails();
    void setDetails(int,int);
    int getId();
    int getValue();
};

Product::Product(int id = 0, int value = 100)
{
    this->id = id;
    this->value = value;
}

void Product::showDetails(){

}   

void Product::setDetails(int id,int value){
    this->id = id;
    this->value = value;
}

int Product::getId(){
    return this->id;
}

int Product::getValue(){
    return this->value;
}

// pc.getId();
// pc.getValue();

// pc.getId().getValue();



