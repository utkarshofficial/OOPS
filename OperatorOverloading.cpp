#include<iostream>
using namespace std;

class Time{
    int h,m,s;
public:
    Time(int h=0,int m=0,int s=0)
        :h(h),m(m),s(s){}
    void showTime(){
        cout<<"Time "<<h<<":"<<m<<":"<<s<<endl;
    }
    void getTime(){
        cout<<"Enter Time\n";
        cout<<"Hour: ";
        cin>>h;
        cout<<"Minutes: ";
        cin>>m;
        cout<<"Seconds: ";
        cin>>s;
    }
    
    Time add(Time t2){
        t2.h = this->h + t2.h;
        t2.m = this->m + t2.m;
        t2.s = this->s + t2.s;
        return t2;
    }
    Time operator+(Time t2){
        t2.h = this->h + t2.h;
        t2.m = this->m + t2.m;
        t2.s = this->s + t2.s;
        return t2;
    }
    Time operator-(Time t2){
        t2.h = this->h - t2.h;
        t2.m = this->m - t2.m;
        t2.s = this->s - t2.s;
        return t2;
    }
    void increament(){
        s++;
    }
    // Pre Increment
    void operator++(){
        ++s;
    }

    // Post Increment
    void operator++(int){
        s++;
    }
    
};

int main(){
    Time t1(10,6,8),t2(11,5,2);
    Time t3,t4;
    // t1.operator+(t2);
    // t4 = t1 - t2;
    // t3 = t1.add(t2);
    // t3.showTime();
    // t4.showTime();

    // * Increament Time by one
    t3.increament();
    // Post increment
    t3++;

    // Pre increment
    ++t3;

    t3.showTime();

    return 0;
}