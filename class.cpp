#include <iostream>
using namespace std;

int count = 0;
class Box {

    private:
    int x ;
    int size;
    int* items;
    
    // constructor initializes and object.
    public:
    Box(int newx , int size) // parametrized constructor .
    {
        x = newx;
        this->size = size;
        init();
    }
    Box operator+(const Box&b)
    {
        
    }
    Box(Box &b)
    {
        this->x = b.x;
        this->size = size;
        this->items = new int[size];
        //
    }

    void init()
    {
        items  = new int[size];

        for(int i = 0; i<size ; i++)
        {
            items[i] = count++; 
        }
    }
    void print() {

        cout<<"\nx : "<<x<<endl;
        
        cout<<"size : "<<size<<endl;
        
        cout<<"items in box:"<<endl;
        
        for(int i = 0; i<size ; i++)
        {
            cout<<items[i]<<" ";
        }
        cout<<"\n--------------------------"<<endl;
        
    }


    void display() {
        // public ;
    }

    ~Box()
    {
        cout<<"destructor called"<<endl;
        delete[] items;
    }
};


int main() {
    
    Box box1(11 , 5); // instantiating this object using the class , => calling a constructor.
    box1.print(); // 0 , 1 ,2 , 3 ,4 
    Box* box2 = new Box(12 , 3); // 
    box2->print()   ; // 5 , 6 ,7. 
    Box* box3 = box2;
    box3->print();
    delete box3;
    box2->print();
    return 0;



}