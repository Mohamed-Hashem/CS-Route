#include <iostream>
using namespace std;

//===============================	Auther	================================//

class Auther
{
private:
	string name;
	string email;
	char gender;

public:
	Auther() {
		setAuthor("Mohamed", "hamo.hashem2019@gmail.com", 'M');
	}

	Auther(string n, string e, char g) {
		setAuthor(n, e, g);
	}

	void setAuthor(string n, string e, char g) {
		setName(n);
		setEmail(e);
		setGender(g);
	}

	// Setters:

	void setName(string n) {
		name = n;
	}

	void setEmail(string e) {
		email = e;
	}

	void setGender(char g) {
		gender = g;
	}

	// Getters:

	string getName() {
		return name;
	}

	string getEmail() {
		return email;
	}

	char getGender() {
		return gender;
	}
};

//===============================	Book	================================//

class Book {

private:
	string name;
	double price;
	int qty = 0;
	Auther auther;

public:
	Book() {
		setName(" ");
		setPrice(0);
	}

	Book(string n, double p, Auther a) {
		setName(n);
		setPrice(p);
		setAuther(a);
	}

	Book(string n, double p, Auther a, int q) {
		setName(n);
		setPrice(p);
		setAuther(a);
		setQty(q);
	}

	// Setters:

	void setName(string n) {
		name = n;
	}

	void setPrice(double p) {
		price = p;
	}

	void setQty(int q) {
		qty = q;
	}

	void setAuther(Auther a) {
		auther = a;
	}

	// Getters:

	string getName() {
		return name;
	}

	double getPrice() {
		return price;
	}

	int getQty() {
		return qty;
	}

	string getAutherName() {
		return auther.getName();
	}

	string getAutherEmail() {
		return auther.getEmail();
	}

	char getAutherGender() {
		return auther.getGender();
	}
};

//=================================		Main	===============================//

int main() {

	Auther a("Mohamed Hashem", "hamo.hashem2019@gmail.com", 'M');

	Book b("C++ How To Program", 500, a, 3);

	cout << "Book Name : " << b.getName() << endl;
	cout << "Price : " << b.getPrice() << endl;
	cout << "Quantity : " << b.getQty() << endl;

	cout << "Auther Name : " << b.getAutherName() << endl;
	cout << "Auther Email : " << b.getAutherEmail() << endl;
	cout << "Auther Gender : " << b.getAutherGender() << endl;

	return 0;
}