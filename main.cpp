#include <iostream>
using namespace std;

int main()
{
    bool exit = false;
    while (!exit)
    {
        cout << "0. Exit the App" << endl;
        cout << "1. Print Help" << endl;
        cout << "2. Print Exchange Stats" << endl;
        cout << "3. Make an Offer" << endl;
        cout << "4. Make a Bid" << endl;
        cout << "5. Print Wallet" << endl;
        cout << "6. Continue" << endl;
        cout << "==================" << endl;
        cout << "Type 1-6 : " << endl;
        int menuSelect;
        cin >> menuSelect;
        cout << menuSelect << " : ";
        if (menuSelect == 0)
        {
            cout << "exiting the app";
            exit = true;
        }
        else if (menuSelect == 1)
        {
            cout << "Help - Your aim is to make money -> Analyse the market " << endl;
        }
        else if (menuSelect == 2)
        {
            cout << "Market seems good " << endl;
        }
        else if (menuSelect == 3)
        {
            cout << "Try to make an offer " << endl;
        }
        else if (menuSelect == 4)
        {
            cout << "Try to make an offer " << endl;
        }
        else if (menuSelect == 5)
        {
            cout << "TYour wallet is empty " << endl;
        }
        else if (menuSelect == 6)
        {
            cout << "Continue " << endl;
        }
        else{
            
            cout << "False input please type in range of 0 until 6" << endl;
        }
        cout <<endl;
    }
}