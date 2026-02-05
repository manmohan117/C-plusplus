#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt"); // it new a file 

    if(!fin)
    {
        cout<<"here is a erro"<<endl;
    }

    fin << "hello world "<<endl;
    fin << "hello world 2";

    return 0;
}