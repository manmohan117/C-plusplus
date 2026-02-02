#pragma once 
#include"ICarComponents.h"

class HybridCar : public ICarComponents {

    public:
    void engine();
    void gearBox();
    void steeringWheel();
    
};