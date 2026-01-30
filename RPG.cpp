#include <iostream>
using namespace std;

class Hero
{
    protected:
    string name ;
    int health;

    public:
     Hero(string name , int health)
     {
        this->name = name ;
        this->health = health;
        cout<<"Base Hero " << name << "has Entered the world"<<endl;
     }

     virtual void takeDamage(int amount)
     {
        this->health -= amount;
     }

     virtual void display()
     {
        cout<<"\nHero Name  : "<<name<<endl;
        cout<<"Health : "<<health<<endl;
     }

};



class Warrior : public Hero {
    private:
    int armor;

    public:
    int actualDamage = 0;
    Warrior(string name , int health , int armor): Hero(name , health) , armor(armor) {
        
        cout<<"Warrior "<<name <<" is ready for battle "<<endl;
    }


    void takeDamage(int amount)
        {
            actualDamage = amount - (armor/2);
            health -= actualDamage;
        }
        
    void display()
            {
               cout<<name<<" Take the damage "<< actualDamage<<endl;
            }
    };

    
   

class Mage : public Hero 
{
    int mana;

    public:
    Mage(string name , int health , int mana) : Hero(name , health) , mana(mana) {
        cout<<"Mage : "<<name << " has entered the Battle"<<endl;
    }
    void castSpell()
    {
        if(mana >= 10)
        {
            mana -= 10;
            cout<<"Casting Fireball "<<endl;
        }

        else 
        {
            cout<<"Mana : " << mana << " is less than 10" <<endl;
        }
    }
};

int main() {
    
    Hero* ptr = new Warrior("Thor" , 120 , 30 );
    Mage Mage("Loki" , 100 , 50);
    ptr->takeDamage(40);
    ptr->display();

    // Mage.takeDamage(20);
    // Mage.display();

    return 0;
}