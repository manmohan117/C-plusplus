// private;
#include<iostream>

using std::string;
using std::cout;
using std::endl;

class Base {
    private:
    int secret = 100;

    public:
    int getSecret(string role)
    {
        if(role == "admin")
        return secret;

        else{
            cout<<"Not Authorized!"<<endl;
            return -1;
        }

    }
    friend class Derived;
}; 

 class Derived : public Base {
    private:
    string role ;
    public:
    Derived(string role)
    {
        this->role = role;
    }

    string getRole() const
    {
        return role;
    }

    void secret_()
    {
        cout<<"Base class Secret Value is :";
        cout<<secret<<endl;
    }


};


int main()
{
    Derived object("user");
    object.secret_();
}


