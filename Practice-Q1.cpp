//  Create a BankAccount class with attributes accountNumber, balance, and accountHolderName. Write functions to:

// Deposit and withdraw money.
// Display account details.

#include <iostream>
#include <string>
using namespace std;

class BankAccount{
private:
    int accountNum;
    float balance;
    string name;
public:
    BankAccount(string nam, int accnum, float bal) : name(nam), balance(bal), accountNum(accnum){
    }
    void deposit(){
        int amount;
        cout << "Enter the amount : ";
        cin >> amount;
        balance += amount;
        cout << "Updated Balance : " << balance << endl;
    }
    void withdraw(){
        int amount;
        cout << "Enter the amount : ";
        cin >> amount;
        if (amount < balance){
            balance -= amount;
            cout << "Updated Balance : " << balance << endl;
        }
        else{
            cout << "Insufficent Balance!" << endl;
        }
        
    }
    void display(){
        cout << "Account Holder Name : " << name << endl;
        cout << "Account number : " << accountNum << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    BankAccount c1("Ahmad", 201, 10000);
    c1.display();
    cout << "\n\t-----> Deposit Money <-----\n";
    c1.deposit();
    cout << "\n\t-----> Withdraw Money <-----\n";
    c1.withdraw();
    return 0;
}