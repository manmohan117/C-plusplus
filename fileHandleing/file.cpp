#include <iostream>
#include<fstream>
using namespace std;

// input 
int main() {
    ifstream file;

    file.open("data.txt");
    if(!file)
    {
        cout<<"file not found!!"<<endl;
    }
    string s ;
    file >> s;
    string secondword;
    file >> secondword;
    cout<<s;
    cout<<secondword;



    

    




}