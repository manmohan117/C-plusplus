#include <iostream>
using namespace std;


class Parent {
    public:
    int x ,  y;

    protected:
    int z = 100;

    public:

    void print()
    {
        cout<<x<<" "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }

};


class Child : public Parent {

    public:
    void printz()
    {
        cout<<"z : "<<z<<endl;
    }

    
};

int main() {
    Child child;
    child.print(); // z will print

    cout<<"x :" <<child.x<<endl;

    cout<<"z :"<<endl;
    child.printz(); //
    return 0;
}