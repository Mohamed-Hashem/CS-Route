#include <iostream>
using namespace std;

class Account
{
private:
	string Id;
	string Name;
	int Balance = 0;

public:
	Account(string id, string n) {
		setId(id);
		setName(n);
	}
	Account(string id, string n, int b) {
		setId(id);
		setName(n);
		setBalance(b);
	}

	//	Setters:

	void setId(string id) {
		Id = id;
	}

	void setName(string b) {
		Name = b;
	}

	void setBalance(int b) {
		Balance = b;
	}

	//	Getters:

	string getName() {
		return Name;
	}

	string getId() {
		return Id;
	}

	int getBalance() {
		return Balance;
	}

	int Credit(int amount) {
		setBalance(getBalance() + amount);
		return getBalance();
	}

	int Debit(int amount) {

		if (amount <= getBalance()) {
			setBalance(getBalance() - amount);
		}
		else {
			cout << "amount exceeded";
		}

		return getBalance();
	}

	int transfereTo(Account a, int amount) {

		if (amount <= getBalance()) {
			a.setBalance(amount);
			setBalance(getBalance() - amount);
		}
		else {
			cout << "Amount exceeded";
		}
		return getBalance();
	}
};

//=================================		Main	===============================//

int main() {
	Account a("12345", "mohammed", 3000);
	Account b("678910", "ahmed", 2000);

	cout << "Hi " << a.getName() << " Your balance is : " << a.getBalance() << endl;

	int x;
	cout << "\nEnter amount you will Deposit : ";
	cin >> x;
	cout << "\nNow your balance is : " << a.Credit(x) << endl;

	int y;
	cout << "\nEnter amount you will withdraw : ";
	cin >> y;
	cout << "\nNow your balance is : " << a.Debit(y) << endl;

	int z;
	cout << "\nEnter amount you will transfer : ";
	cin >> z;
	cout << "\nNow your balance is : " << a.transfereTo(b, z);

	cout << "\nNow " << b.getName() << "balance is : " << b.getBalance() << endl;
}