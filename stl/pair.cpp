#include <iostream>

using namespace std;

int main() {

    pair<string, pair<int , int> > p  = {"firstPair" , {1, 10}};
    
    cout<<"first "<<p.first;
    cout<<endl;
    cout<<"second \n"<<p.second.first;
    cout<<"second \n"<<p.second.second;

    return 0;
}