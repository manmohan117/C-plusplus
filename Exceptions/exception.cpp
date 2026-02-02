#include <iostream>
using namespace std;

int main() {

  try {
        string s = "hello";
        int index = 5;
        if(index >= s.size())
        throw(runtime_error("the index size is out of bound"));
        cout<<s.at(index);
  }

  catch(invalid_argument &e)
  {
    cout<<"second catch"<<endl;
    cout<<e.what()<<endl;
  }
  catch(...){ 
    cout<<"first catch"<<endl;
    // cout<<e.what()<<endl;
  }

    return 0;
}
