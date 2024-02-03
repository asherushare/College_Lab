#include <bits\stdc++.h>
using namespaces std;

class Bank {
  public:
  int bal;
  int roi;

  Bank(int Bal, int Roi) {
    bal = Bal;
    roi = Roi;
  }

  void Balance()
  {
    cout << bal << endl;
  }

  void Deposite() {
    int amount;
    cout << "Enter the amount do you want to deposite: ";
    cin >> amount;

    bal = bal + amount;
    cout << "Current balance is: " << bal << endl;
  }

  void withdraw() {
    int withdraw:
    cout << "How much money do you want to withdraw: ";
    cin >> withdraw;

    if(bal < withdraw) {
      cout << "Insufficient balance.";
    }
    else {
      bal = bal - withdraw;
      cout << "currenct balance is: " << bal << endl;
    }
  }

  void comInte() {
    int n;
    cout << "Enter the number of years to calculate compound interest: ";
    cin >> n;

    float CI = pow (1+roi/100, n) - bal;
    cout << "Compund interest of " << n << "years is: " << CI << endl;
  };

  void menu() {
    int choice:
    cout << "Enter your choice: ";

    switch (ch)
    {
    case 1:
      cout << "To deposite money: ";
      bankSys.deposite();
      break;

    case 2:
      cout << "to withdraw money.";
      bankSys.withdraw();
      break;

    case 3: 
      cout << "To Calculate compound Interest";
      bankSys.comInte();
      break;
  
    default:
      break;
    }
  }

  ~ Bank();

}


int main() {

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