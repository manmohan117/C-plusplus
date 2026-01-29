#include <iostream>
using namespace std;

class Point {
    private:
    int x ;
    int y ;
   public:
   Point ( int point1 , int point2 ) : x(point1) , y( point2) { cout<<"constructor called" ;};

   Point() 
   {

   }
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
   Point operator++(int)
   {
      Point temp(this->x , this->y);
      this->x++;
      this->y++;
      return temp;
   }
   int getx() const
   {
    return x;
   }

   int gety() const
   {
    return y;
   }
   void setx(int x)
   {
     this->x = x;
   }

   void sety(int y)
   {
    this->y = y;
   }


   bool operator==(const Point&  point) const
   {
      return this->x == point.x && this->y == point.y;
   }

   bool operator!=(const Point& point) const 
   {
      return this->x != point.x && this->y != point.y;
   }



};

ostream& operator<<(ostream& output , const Point& point)
{
    output << point.getx() << " , " << point.gety();
    return output;
}

istream& operator>>(istream& input , Point& point)
{
   int x , y;
   input>>x>>y;
   point.setx(x);
   point.sety(y);

   return input;
}

int main() {
    
    
    const Point p1(10 , 10);
    const Point p2(10 , 10);


    if(p1 == p2)
    {
      cout<< "i and j are equal"<<endl;
    }

    // cout<<p1;
    //  // 5 5 

    return 0;
}