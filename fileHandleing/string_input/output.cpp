#include <iostream>
#include <fstream>
using namespace std;

void charbychar(ifstream& data)
{
    char ch;
    while(data.get(ch))
    {
        cout<<ch<<" "<<endl;
    } 
}
void wordbyword(ifstream& data)
{
    string word;

    while(data >> word)
    {
        cout<<word<<endl;
    }
}


int main() {

    ifstream read_data;
    read_data.open("data.txt") ;

    if(!read_data)
    {
        cout<<"file not found"<<endl;
    }

    charbychar(read_data);
    read_data.clear();
    read_data.seekg(0);
    wordbyword(read_data);
    return 0;
}