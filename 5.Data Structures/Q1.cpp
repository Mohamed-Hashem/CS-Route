#include <iostream>
#include <vector>
using namespace std;

///////////////////////////// Base Class Person /////////////////////////////

class Person {
private:
	int id;
	string FName;
	string LName;
	string password;

public:

	Person() {
		id = 0;
		FName = "";
		LName = "";
		password = "";
	}

	Person(int id, string FName, string FLName, string password) {
		setID(id);
		setFName(FName);
		setLName(FLName);
		setPassword(password);
	}

	void setID(int id) {
		this->id = id;
	}

	void setFName(string FName) {
		this->FName = FName;
	}

	void setLName(string FLName) {
		this->LName = FLName;
	}

	void setPassword(string password) {
		this->password = password;
	}

	int getID() {
		return id;
	}

	string getFName() {
		return FName;
	}

	string getLName() {
		return LName;
	}

	string getPassword() {
		return password;
	}

	void Print() {
		cout << "ID: " << getID() << endl;
		cout << "First Name: " << getFName() << endl;
		cout << "Last Name: " << getLName() << endl;
		cout << "Password: " << getPassword() << endl;
	}
};

///////////////////////////// Child Class Instructor /////////////////////////////

class Instructor :public Person {
public:
	Instructor() {
	}
	Instructor(int id, string FName, string FLName, string password) :Person(id, FName, FLName, password) {
	}
};

///////////////////////////// Child Class Student /////////////////////////////

class Student :public Person {
public:
	Student() {
	}
	Student(int id, string FName, string FLName, string password) :Person(id, FName, FLName, password) {
	}

};

///////////////////////////// Child Class Course /////////////////////////////

class Course {

private:
	int id;
	string name;
	Instructor instructor;
	vector<Student> students;
public:
	Course() {
		id = 0;
		name = "";
	}

	Course(int id, string name, Instructor instructor, vector<Student> students) {
		setID(id);
		setName(name);
		setInstructor(instructor);
		setStudents(students);
	}

	void setID(int id) {
		this->id = id;
	}

	void setName(string name) {
		this->name = name;
	}

	void setInstructor(Instructor ins) {
		this->instructor = ins;
	}

	void setStudents(vector<Student> s) {
		this->students = s;
	}

	int getID() {
		return id;
	}

	string getName() {
		return name;
	}

	Instructor getInstructor() {
		return instructor;
	}

	void addStudent(Student student) {
		students.push_back(student);
	}

	void allStudents() {

		for (int i = 0; i < students.size(); i++) {
			students[i].Print();
			cout << "$===================================$" << endl;
		}
	}
	void Print() {
		cout << "ID: " << getID() << endl;
		cout << "Name: " << getName() << endl;

		cout << endl;
		
		cout << "Instructor Information: " << endl;
		instructor.Print();
		
		cout << endl;
		cout << "Students: " << endl;
		allStudents();
	}
};

int main()
{

	vector<Student> vs; // vector of students
	vs.push_back(Student(1, "Ahmed", "Ali", "123"));
	vs.push_back(Student(2, "Mohamed", "Ali", "321"));
	vs.push_back(Student(3, "Ibrahim", "Ali", "456"));
	vs.push_back(Student(4, "Yasser", "Ali", "654"));
	vs.push_back(Student(5, "Nader", "Ali", "789"));
	vs.push_back(Student(6, "Morad", "Ali", "987"));

	Instructor s(1, "Mohamed", "Hashem", "mhashem"); // Instructor

	Course c(1, "C++", s, vs);
	c.Print();
}
