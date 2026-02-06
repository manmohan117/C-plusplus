#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> &temp)
{
    for(int i = 0; i<temp.size() ; i++)
    {
        cout<<temp[i]<<" ";
    }
}
int main() {
    vector<int> temp = {1, 1 , 3  ,3 , 4 , 4};
    // int zeros = count(temp.begin() , temp.end() , 0);
    // print(temp);
    // cout<<endl;
    // temp.erase(remove(temp.begin() , temp.end()  , 0) , temp.end());
    // temp.insert(temp.end() , zeros , 0);
    // print(temp);
    print(temp);
    cout<<endl;
    temp.erase(unique(temp.begin()  ,temp.end()) , temp.end());
    print(temp);
    return 0;
}