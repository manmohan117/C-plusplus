#include <iostream>
#include <fstream>


using namespace std;

int main() {
    
    ofstream file;
    file.open("data.txt");

    if(!file )
    {
        cout<<"file not found "<<endl;
    }

    file << "more hello world "<<endl;

    return 0;
}