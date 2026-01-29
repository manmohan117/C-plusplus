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

   Point operator-(Point &otherPoint)
   {
        return Point(this->x - otherPoint.x , this->y - otherPoint.y) ; 
   }

   Point& operator++()
   {
       this->x++;
       this->y++;

       return *this;
   }
   // post increment 
   Point operator++(int)
   {
      Point temp(this->x , this->y);
      this->x++;
      this->y++;
      return temp;
   }
};

int main() {
    
    Point p1(10 , 15);
    Point p2(5,5);
    ++p1,  p1++;

     Point p3 = p1++;

    p3.print();
    p1.print();
    return 0;
}