// Create an interface IDevice.
// Define two pure virtual methods: void turnOn() and void turnOff().
// Create two classes, TV and Fan, that inherit from IDevice.
// The Test: In main, create an array of IDevice* pointers. 
// Put one TV and one Fan inside.
// Loop through the array and call turnOn() for everything.
#include <iostream>
using namespace std;

class IDevice {
    public:
    virtual void turnOn()=0;
    virtual void turnOff()=0;

    virtual ~IDevice()
    {
        cout<<"Devices are deleted"<<endl;
    }

};

class Tv : public IDevice {

    public:
    Tv()
    {
        cout<<"TV is built"<<endl;
    }

    void turnOn() override
    {
        cout<<"TV is Turned ON"<<endl;
    }

    void turnOff() override
    {
        cout<<"TV is Turned OFF"<<endl;
    }

    ~Tv()
    {
        cout<<"Fan is Removed"<<endl;
    }

};
class Fan : public IDevice {

    public:
    Fan()
    {
        cout<<"Fan is built"<<endl;
    }

    void turnOn() override
    {
        cout<<"Fan is Turned ON"<<endl;
    }

    void turnOff() override
    {
        cout<<"Fan is Turned OFF"<<endl;
    }

    ~Fan()
    {
        cout<<"Fan is Removed"<<endl;
    }

};

int main() {
    // 
    int arr[5] = {1 ,2 ,3 , 4 ,5};

    
    IDevice* Devices[2] ;

    Devices[0] = new Tv;
    Devices[1] = new Fan; // heap
    

    for(int i = 0 ; i<2 ; i++)
    {
        Devices[i]->turnOn();
    }

    for(int i =0 ; i< 2 ; i++)
    {
        delete Devices[i];
    }
    

    return 0;
}
