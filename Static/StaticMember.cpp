#include<iostream>
using namespace std;

void showAlive(){
    // cout<<aliveCount<<endl;
}
class Player{
    int killed;
public:
    static int aliveCount;
    
    Player(){
        aliveCount++;
    }
    void move(){}
    ~Player(){
        aliveCount--;
    }
};

int Player::aliveCount = 0;

int main(){

    showAlive();
    Player p1;
    Player p3;
    showAlive();
    {
        Player p2;
        showAlive();
        cout<<p2.aliveCount<<endl;
        cout<<Player::aliveCount<<endl;
    }
    cout<<p3.aliveCount<<endl;
    showAlive();
    

    
    return 0;
}