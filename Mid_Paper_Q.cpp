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
    Bank_Account(int accno, float bal, string tp) : account_no(accno), balance(bal), type(tp) {}
    void withdraw(float amount){
        cout << "Enter amount, You want to withdraw : ";
        cin >> amount;
        if (amount < balance)
        {
            balance -= amount;
            cout << "Updated Balance : " << balance << endl;
        }
        else
        {
            cout <<"Insufficent Balance !!" << endl;
        }
        
    }
    void deposit(float amount){
        cout << "Enter amount, You want to deposit : ";
        balance += amount;
        cout << "Updated Balance : " << balance << endl;
    }
    void close_Account(){
        type = '\0';
        account_no = 0;
        balance = 0;
    }
};

class Customer {
private:
    string name;
    int customer_id;
    Bank_Account* Account;
public: 
    Customer(string custname, int custno): name(custname) , customer_id(custno) {}
    void create_account(){
        cout << "Enter Customer's name : ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter";
    }
};