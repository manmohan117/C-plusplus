#include <iostream>
using namespace std;

class A {
    
    public:
    void print()
    {
        cout<<"A"<<endl;
    }

};

class B : virtual public A {

};

class C : virtual public A {

};


class D : public B , public C {
    
};



int main() {
    B object1;
    C object2;
    D object3 ;


    // object2.print();
    // object1.print();

    object3.print();
    return 0;
}
