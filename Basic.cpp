#include<iostream>
using namespace std;

class Employee{
private:
    int id;
    double salary;
    string department;
    bool permission;

public:
    // Employee(){
    //     setDetails(0,0,"None");
    // }
    // Employee(int _id,double sal,string dep){
    //     setDetails(_id,sal,dep);
    // }

    //* Constructor with default arguments
    Employee(int _id=0, double sal=0, string dep="None"){
        setDetails(_id,sal,dep);
    }

    // * Initializer List
    Employee(int _id=0, double sal=0, string dep="None")
        :id(_id),salary(sal),department(dep){}

    void setDetails(int _id,double sal,string dep){
        id = _id;
        salary = sal;
        department = dep;
    }

    void setDetails(){
        cout<<"Enter Details\n";
        cin>>id>>salary>>department;
        cout<<endl;
    }

    void showDetails(){
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Department: "<<department<<endl;
    }
    void setId(int _id){
        if(permission){
            id = _id;
        }else{
            cout<<"You Don't have persission\n";
        }
    }
};

int main(){
    int n=2;

    // Employee emps[5];
    // emps[0].setDetails();
    // emps[1].setDetails();
    // emps[2].setDetails();
    // emps[3].setDetails();
    // emps[4].setDetails();

    // emps[0].showDetails();
    // emps[1].showDetails();
    // emps[2].showDetails();
    // emps[3].showDetails();
    // emps[4].showDetails();
    
    Employee emps[3];
    for(int i=0;i<n;i++){
        emps[i].setDetails();
    }

    for(int i=0;i<n;i++){
        emps[i].showDetails();
    }
    
    return 0;



}