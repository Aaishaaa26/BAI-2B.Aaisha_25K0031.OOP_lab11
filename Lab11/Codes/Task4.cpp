#include <iostream>
using namespace std;

class BankAccount{
	int balance;
	public:
		BankAccount(int bal) : balance(bal) {}
		void withdraw(int amount){
			try{ 
		    	if(amount> balance) throw amount; 
		    	balance -= amount;
		    	cout<<"Withdrawal successful! New Balance: $" << balance << endl;

			}
			catch(int){
				cout << "Error: Insufficient funds to complete withdrawal!" << endl;
			}
		}
		void showBalance(){
			cout<< "Current Balance: $" << balance << endl;
		}
};

int main(){
	BankAccount b1(500);
	b1.showBalance();
	cout << "Enter withdraw amount: $";
	int amount;
	cin>> amount;
	b1.withdraw(amount);
	b1.showBalance();
	cout << "Enter withdraw amount: $";
	cin>> amount;
	b1.withdraw(amount);
}
