#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream read_data;
    read_data.open("data.txt") ;

    if(!read_data)
    {
        cout<<"file not found"<<endl;
    }


    //1. read character by character
    // char ch ;


    // while(read_data.get(ch))
    // {
    //     cout<<ch<<" "<<endl;
    // } 

    // // reads every char , 

// 2. read word by word

    // string word;

    // while(read_data >> word)
    // {
    //     cout<<word<<endl;   
    // }

    // 3. reading line by line

    string line ;

    while(getline(read_data , line))
    {
        cout<<line<<endl;
    }
    return 0;
}