// Chargers // base // 

// wired 
// wireless 
#include<iostream>
using namespace std;

class Chargers {


    public:
    virtual void charge() = 0;


};


class WiredCharger : public Chargers {
    private:
    void charge()
    {
       cout<<"Charging with speed of 33W"<<endl;
    }
};

class WirelessCharger : public Chargers {
    private:
    void charge()
    {
        cout<<"Charing with wireless charger "<<endl;
    }
};

class Smartphone {
    private:
    Chargers* charger = nullptr;

    public:

    Smartphone()
    {


    }

    void plugin(Chargers* other)
    {

        charger = other;

        if(charger == nullptr)
        {
            cout<<"Connect your charger"<<endl;
        }

        else 
        {
            charger->charge();
        }
    }
    
};


int main()
{

    WiredCharger mycharger33W;
    WirelessCharger mywirelessCharger;

    Smartphone samsung;

    samsung.plugin(&mycharger33W);
    samsung.plugin(&mywirelessCharger);



}











