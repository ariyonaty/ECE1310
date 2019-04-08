/*
    Ari Yonaty
    ECE 1310
    2.14.2019
    Project 1: ATM 
*/

#include <iostream>

using namespace std;

float deposit(float balance, float amount);
float withdraw(float balance, float amount);
float checkBalance(float balance);

int main()
{
    float acctBalance = 100.00;

    char login;
    cout << "\n-------------------------------------\n";
    cout << "Welcome to National Bank of ECE 1310!\n";
    cout << "Would you like to make a transaction? (y/n): ";
    cin >> login;

    if (login == 'y')
    {
        while (login != 'n')
        {
            int choice;
            cout << "\n***\nCheck Balance(1)  |  Withdraw(2)  |  Deposit(3)  |  Quit(4)\n";
            cout << "Enter digit 1-4: ";
            cin >> choice;
            if (choice == 1)
            {
                checkBalance(acctBalance);
            }
            if (choice == 2)
            {
                float i;
                cout << "Enter amount to Withdraw: $";
                cin >> i;
                acctBalance = withdraw(acctBalance, i);
            }
            if (choice == 3)
            {
                float i;
                cout << "Enter amount to Deposit: $";
                cin >> i;
                acctBalance = deposit(acctBalance, i);
            }
            if (choice == 4)
            {
                login = 'n';
                cout << "Goodbye!\n";
                break;
            }
        }
    }

    else if (login == 'n')
    {
        cout << "Goodbye!\n";
    }

    else
    {
        cout << "Invalid Option!\n";
    }

    return 0;
}

float checkBalance(float balance)
{
    cout << '$' << balance << '\n';
    return balance;
}

float deposit(float balance, float amount)
{
    balance += amount;
    return (balance);
}

float withdraw(float balance, float amount)
{
    if (balance < amount)
    {
        cout << "Insufficient funds in account.\n";
        return 0.0;
    }
    else
    {
        balance -= amount;
        return (balance);
    }
}
