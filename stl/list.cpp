#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <pair>

using namespace std;

int main() {

    list<int> l;

    for(int i = 0 ; i<10 ; i++)
    {
        l.push_back(i);
    }
    for(auto i : l)
    {
        cout<<i<<" ";
    }
    // l.remove(4);
    // l.erase(remove(l.begin() , l.end() , 4)  , l.end());

    l.pop_back();
    l.pop_front();
    cout<<endl;

    for(auto i : l)
    {
        cout<<i<<" ";
    }




    
    return 0;
}