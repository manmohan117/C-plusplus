#include <iostream>
using namespace std;

// Create a class PasswordVault to store a list of passwords.
// Data Members:
// string owner: The name of the vault owner.
// string* passwords: A heap-allocated array of strings.
// int capacity: Max passwords the vault can hold.
// int currentCount: How many are currently stored.
// Methods:
// void addPassword(string pass): Adds a password to the next available slot.
// void showVault(): Displays all passwords. Requirement: Use a temporary pointer to traverse the array (do not move the original member pointer).
// The Destructor:
// Ensure the heap memory is released. Print "[System] Vault for {owner} destroyed" to the console.


class PasswordVault {
    
    public:
    string owner;  
    string* passwords;
    int capacity;
    int currentCount ;


    public:

    PasswordVault(string owner, int capacity)
    {
        cout<<"constructor called ";


        this->owner = owner;
        this->capacity = capacity;
        passwords = new string[capacity];
        currentCount = 0;

    }
    

    void addPassword(string password)
    {
        if(currentCount < capacity)
        {
            this->passwords[currentCount++] = password;
        }
        else{
            cout<<"Capacity is full " <<endl;
        }
    }

    void displayVault()
    {
        if(currentCount == 0)
        {
            cout<<"No passwords in the vault Please add password"<<endl;
        }

        else
        {
            for(int i = 0 ;i< currentCount ; i++)
            {
                cout<<" "<< i+1 <<passwords[i]<<"\n";
            }
        }
    }

     
    ~PasswordVault()
    {
        cout<<"Destructor called" <<endl;

        delete[] passwords;
    }

} ;

int main() {
    
    PasswordVault object1("manmohan" , 2);
    object1.addPassword("132");
    object1.addPassword("123544");

    object1.displayVault();

    return 0;
}