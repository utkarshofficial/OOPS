#include <iostream>
using namespace std;

void showAlive()
{
    // cout<<aliveCount<<endl;
}
class Player
{
    int killed;
    static int aliveCount;

public:
    static void getAlive()
    {
        cout << "Alive: " << aliveCount << endl;
    }
    Player()
    {
        aliveCount++;
    }
    void move() {}
    ~Player()
    {
        aliveCount--;
    }
};

int Player::aliveCount = 0;

int main()
{

    Player::getAlive();

    {
        Player p1;
        Player p3;
        {
            Player::getAlive();
            Player p2;
            showAlive();
            p3.getAlive();
            Player::getAlive();
        }
    }

    Player::getAlive();
    return 0;
}