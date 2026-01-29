#include <iostream>
using namespace std;

// multi level 
class A {

};

class B : public A {

};


class C : public B {

};


// heirarical inheritance 
class D : public A {


};

// multiple inheritance 
class E : public D , public C {

}; 






