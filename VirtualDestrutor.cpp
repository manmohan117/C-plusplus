#include <iostream>
using namespace std;
class Server 
{
    public:
    Server()
    {
        cout<<"Server is starting "<<endl;
    }
    virtual ~Server()
    {
        cout<<"Server hardware off."<<endl;
    }
};


class WebStack : public Server
{
    public:
    WebStack()
    {
        cout<<"Allocating 10GB of RAM"<<endl;
    }

    ~WebStack()
    {
        cout<<"10GB RAM Released!"<<endl;
    }
};

int main() {

    Server* s = new WebStack(); 
    delete s;
    return 0;
}