#include <iostream>
using namespace std;
class Account{
	public:
		//member variables
		string owner="";
		int balance = 0;
		//memeber function
		void deposit(int amount) {
			balance += amount;
		}
		void withdraw(int amount) {
			balance -= amount;
		}
		void show() {
			cout << "Name: " << owner<<endl;
			cout << "Balance: " << balance<<endl;
		}
};
int main() {
	Account customer1;
	customer1.owner="Lee";
	customer1.balance=15000;
	customer1.deposit(7000);
	cout << customer1.balance<<endl;
	customer1.withdraw(12000);
	cout << customer1.balance<<endl;
	customer1.show();
}