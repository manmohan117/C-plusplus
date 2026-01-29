
#include <iostream>
using namespace std;
// inheritance-> 

class Entity {

    protected:
    int x , y ;

    public:

    Entity(int x ,int y )
    {
        cout<<"hello i am entity"<<endl;
            this->x   = x;
            this->y = y;
    }
    

}; // => base 

class Player : public Entity{


    private:
    string name;

    public:
    Player(int x , int y , string name) : Entity(x , y) , name(name) {};
    

    void print()
    {
        cout<<x <<y<<endl;
        cout<<"name: "<<endl;
        cout<<name<<endl;
    }

}; // => derives calss 


int main() {

    Player player1(10 , 20 , "bestplayer") ;

    player1.print();
    return 0;
}