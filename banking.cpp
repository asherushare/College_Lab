#include <bits/stdc++.h>
using namespace std;

class Bank
{
public:
  int bal;
  int roi;

  Bank(int Bal, int Roi)
  {
    bal = Bal;
    roi = Roi;
  }

  void Balance()
  {
    cout << bal << endl;
  }

  void Deposite()
  {
    int amount;
    cout << "Enter the amount you want to deposit: ";
    cin >> amount;

    bal = bal + amount;
    cout << "Current balance is: " << bal << endl;
  }

  void withdraw()
  {
    int withdraw;
    cout << "How much money do you want to withdraw: ";
    cin >> withdraw;

    if (bal < withdraw)
    {
      cout << "Insufficient balance.";
    }
    else
    {
      bal = bal - withdraw;
      cout << "current balance is: " << bal << endl;
    }
  }

  void comInte()
  {
    int n;
    cout << "Enter the number of years to calculate compound interest: ";
    cin >> n;

    float CI = bal * pow(1 + roi / 100.0, n) - bal;
    cout << "Compound interest of " << n << " years is: " << CI << endl;
  }

  void menu()
  {
    int choice;

    while (true)
    {
      cout << "Choices are: " << endl;
      cout << "1. To deposit money." << endl;
      cout << "2. To withdraw money." << endl;
      cout << "3. To Calculate compound Interest" << endl;
      cout << "4. Exit" << endl;

      cout << "Enter your choice: ";
      cin >> choice;

      switch (choice)
      {
      case 1:
        Deposite();
        break;

      case 2:
        withdraw();
        break;

      case 3:
        comInte();
        break;

      case 4:
        return; // Exit the function (and the loop)
      }
    }
  }

  ~Bank() {}
};

int main()
{
  int startingBal;
  int RateofI;

  cout << "Enter the initial amount: ";
  cin >> startingBal;
  cout << "Enter the initial rate of interest: ";
  cin >> RateofI;

  Bank bankSys(startingBal, RateofI);

  bankSys.menu();

  return 0;
}
