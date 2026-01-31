#include <iostream>
using namespace std;

// Create class BankAccount.
// Private: double balance.
// Static: static double totalBankCash. Update this whenever a new account 
// is created.
// Friendship: Declare class TaxAuditor as a friend.
// The Test: Create a TaxAuditor class with a method 
// inspect(BankAccount &account) that prints the private balance.

class BankAccount 
{
    private: 
    double balance ;
    static double totalBankCash ; 

    public:
    BankAccount(double balance )
    {
        this->balance = balance;
        totalBankCash += this->balance;
    }

    friend class TaxAuditor;
};

double BankAccount::totalBankCash = 0;

class TaxAuditor {

    public:

    void inspect(BankAccount &account)
    {
        cout<<"Balance :"<<account.balance<<endl;
    }
};


int main()
{
    BankAccount person1(10000);
    BankAccount person2(20000);


    TaxAuditor inspecter;

    inspecter.inspect(person1);
    inspecter.inspect(person2);




}

