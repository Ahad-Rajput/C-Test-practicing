// A bank has many bank accounts. There are two types of bank accounts, saving and current account. Each account has balance(float) and account number(int). Each account type has operations withdraw, deposit and close account. A Customer has a bank account. Customer must have a name(string) and customer id(int). Customer can perform operations create account, delete account and check balance. Write C++ code for the above case study. You must include all the relationships attributes and functions carefully. Write test code in the main function to test your code.

#include <iostream>
#include <string>

using namespace std;

class Bank_Account{
protected:
    string type;
    int account_no;
    float balance;
public:
    void withdraw(int amount){
        cout << "Enter amount, You want to withdraw : ";
        cin >> amount;
        if (amount < balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout <<"Insufficent Balance !!" << endl;
        }
        
    }
    void deposit(int amount){
        cout << "Enter amount, You want to deposit : ";
        balance = balance + amount;
    }
    void close_Account(){
        type = '\0';
        account_no = 0;
        balance = 0;
    }
};

class Customer : public Bank_Account {
private:
    string name;
    int customer_id;
public: 
    void create_account(){
        cout << "Enter Customer's name : ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter";
    }
};