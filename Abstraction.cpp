#include <iostream>
using namespace std;
//abstract class 
class Entity {

    public:
    //pure virtual
    virtual void display() = 0; 

};

class Player : public Entity{
    void display() override {
        cout<<"Hi i am a player "<<endl;
    }
};

int main() {
    
    Entity* object1 = new Player();
    object1->display();
    return 0;
}




