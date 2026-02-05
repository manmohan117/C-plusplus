#include <iostream>
#include <fstream>

using namespace std;



int main() {

    ofstream output("numbers.txt");
    for(int i = 0; i< 5 ; i++)
    {
        output << i;
    }
    return 0;
}