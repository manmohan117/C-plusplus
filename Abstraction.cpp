#include <iostream>
using namespace std;
//abstract class 
class Entity {

    public:
    //pure virtual
    virtual void display() = 0; 
    // virtual int move(int x , int y) = 0;

};

class Player : public Entity{
    private:
    void display() override {
        cout<<"Hi i am a player "<<endl;
    }
};

class NPC : public Entity {
    private:
    void display() override{

        cout<<"HI i am a NPC ";
    }
};

int main() {
    Player player1 ;
    NPC npc1;


    Entity* entity = &npc1;
    entity->display();

    return 0;
}




