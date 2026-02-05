#include <iostream>
#include <fstream>

using namespace std;
int main() {

    ifstream input ("numbers.txt");
    int numbers[5];


    for (int i = 0; i< 5 ; i++)
    {
        int number ;
        input >> number;
        numbers[i] = number;
    }

    for(int i = 0;  i< 5 ; i++)
    {
        cout<<numbers[i]<<endl;
    }
    return 0;
}