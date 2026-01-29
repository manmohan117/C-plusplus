#include <iostream>
using namespace std;


int add (int x , int y)
{
    return x+y; 
}

int add (double x , double y)
{
    return x+y;
}

int main() {

    cout<<add(1,2);
    cout<<add(1, 20.24); 
    return 0;
}