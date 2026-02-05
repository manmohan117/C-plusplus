#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // step 1 : open the file 
    ofstream fout("data.txt") ;
    if(!fout)
    {
        cout<<"file not found"<<endl;
    }
    fout << "new data"<<endl;
    fout.close();
    return 0;
}
// output hello wold 100 times in the file ;