#include <iostream>
using namespace std;

namespace myios {
    int in = 1; 
    int out = 1 << 1;  
    int append = 1 << 2; 
}
void selectModes(int selection)
{
    int mode = selection;

    if(mode & myios::in) 
    {
        cout<<"read access"<<endl;
    }

    if(mode & myios::out)
    {
        cout<<"write access"<<endl;
    }

    if(mode & myios::append)
    {
        cout<<"append"<<endl;
    }
}

int main() {
    selectModes( myios::in | myios::out | myios::append);
    return 0;
}