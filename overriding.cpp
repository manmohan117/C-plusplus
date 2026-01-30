#include <iostream>
using namespace std;

class Entity {
    public:
    virtual void display() // virtual function
    {
        cout<<"Entity :"<<endl;
    }
}; // => base 

class Player : public Entity{

    public:
    void display() 
    {
        cout<<"Player :"<<endl;
    }

}; // => derives calls 


class newPlayer : public Player {


    public:

    void display() 
    {
        cout<<"Player is a new Player "<<endl;
    }

};


int main() {
    
    Player player;
    Entity entity;

    // Entity* entity_ptr = new Player();
    // Player* newplayer = new newPlayer;

    Entity *pointstoAnyEntity = nullptr;
    
    pointstoAnyEntity  = &player;

    pointstoAnyEntity->display(); // 

    // newplayer->display();

    // entity_ptr->display(); // 
    return 0;

}