#include <iostream>
#include <fstream>
using namespace std;

int main() {

    fstream file("data.txt" , ios::in | ios::out | ios::trunc);
    string word;
    for(int i =0 ;i <= 10 ; i++)
    file << "world ";
    file.seekg(0);
    cout<<word;

    return 0;
}