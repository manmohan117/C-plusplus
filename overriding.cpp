#include <iostream>
using namespace std;


class Entity {

    public:
    void display()
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



int main() {
    
    Player player;
    Entity entity;

    Entity* entity_ptr = new Player();


    // entity.display();
    // player.display();  

    entity_ptr->display(); // 





    return 0;
}