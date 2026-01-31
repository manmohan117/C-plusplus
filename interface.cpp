#include <iostream>
using namespace std;

class ICarComponents{

    public:
    virtual void engine()= 0;
    virtual void gearBox()=0;
    virtual void steeringWheel()=0;

};


class HybridCar : public ICarComponents {

    public:
    void engine() override
    {
        cout<<"Hybird Engine"<<endl;
    }

    void gearBox() override
    {
        cout<<"Automatic GearBox"<<endl;
    }

    void steeringWheel() override 
    {
        cout<<"Power Steering"<<endl;
    }

};


int main()
{
    HybridCar  car ;

    car.engine();
    car.gearBox();
    car.steeringWheel();


}

