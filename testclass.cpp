#include <iostream>
using namespace std;


class A {

    public:
    A()
    {
        cout<<"Base class"<<endl;
    }

    
    virtual ~A()
    {
        cout<<"Base class Destructor Called"<<endl;
    }

};


class B : public A{
    public:
    B()
    {
        cout<<"derived Class"<<endl;
    }

    ~B()
    {
        cout<<"Derived Class Destructor called"<<endl;
    }
};


int main ()
{

    A* object_ptr = new B;
    
    delete object_ptr;


}