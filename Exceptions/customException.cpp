#include <iostream>
using namespace std;

class Myexception : public exception {

    public:
    const char* what() const noexcept
    {
        return " my custom exception";
    }

};

int main() {
    try {
        throw(Myexception());
    }
    catch(exception &e )
    {
        cout<<"first catch "<<endl;
        cout<<e.what()<<endl;
    }
    catch(Myexception &e){
        cout<<"second catch"<<endl;
        cout<<e.what();
    }

    return 0;
}