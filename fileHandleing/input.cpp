#include <iostream>
#include <fstream>
using namespace std;


int main() {

    ifstream fin ;
    fin.open("data.txt");
    if(!fin)
    {
        cout<<"file not found!"<<endl;
    }
    string s;
    while(getline(fin , s))
    {
        cout<<s<<endl;
    }

    return 0;
}

// first read the file 
// 1. character by char  , while(fin.get(ch))
// 2 . word by word   , while(fin >> s) // s=> string
// 3 . line by line ; while (getline(fin , s)) s=> string