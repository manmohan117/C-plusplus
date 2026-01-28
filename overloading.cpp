#include <iostream>
using namespace std;


class Point {
    int x ;
    int y ;

    public:
   Point ( int point1 , int point2 ) : x(point1) , y( point2) { cout<<"constructor called" ;};

   void print()
   {
     cout<<"\n x : " << x << " y : "<< y<<endl;
   }

   Point operator+(Point &otherPoint)
   {
        return Point(this->x + otherPoint.x , this->y + otherPoint.y) ; 
   }

   


};




int main() {
    
    Point p1(10 , 15);
    Point p2(10 , 20);

    p1.print();
    p2.print();

    // Point p3 = p1 + p2 ; 
    Point p3 = p1.operator+(p2);

    p3.print();
    return 0;
}