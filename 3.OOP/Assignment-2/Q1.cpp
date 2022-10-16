#include <iostream>
using namespace std;

//////////////////////////////////////// VIRTUAL BASE CLASS //////////////////////////////////

class Vehicle {
private:
	string vehicleModel;
	string registrationNumber;
	int Speed; // KM / H
	double fuelCapacity; // Litres
	double Consumption; // Litres / KM

public:
	Vehicle()
	{
		setVehicle("Qia", "a123", 180, 50, 5);
	}

	Vehicle(string vm, string rn, int s, double fs, double c)
	{
		setVehicle(vm, rn, s, fs, c);

	}

	void setVehicle(string vm, string rn, int s, double fs, double c) {
		setVehicleModel(vm);
		setrRegistrationNumber(rn);
		setSpeed(s);
		setVehicleModel(fs);
		setConsumption(c);
	}

	void setVehicleModel(string vm) {
		vehicleModel = vm;
	}

	void setrRegistrationNumber(string rn) {
		registrationNumber = rn;
	}

	void setSpeed(int s) {
		Speed = s;
	}

	void setVehicleModel(double fs) {
		fuelCapacity = fs;
	}

	void setConsumption(double c) {
		Consumption = c;
	}

	string getVehicleModel() {
		return vehicleModel;
	}

	string getRegistrationNumber() {
		return registrationNumber;
	}

	int getSpeed() {
		return Speed;
	}

	double getFuelCapacity() {
		return fuelCapacity;
	}

	double getConsumption() {
		return Consumption;
	}

	double fuelNeeded(double distance) {
		return getConsumption() * distance;
	}

	int distanceCovered(int time) {
		return getSpeed() * time;
	}

	void display() {
		cout << "Vehicle Model: " << getVehicleModel() << endl;
		cout << "Registration Number: " << getRegistrationNumber() << endl;
		cout << "Speed: " << getSpeed() << " (KM / H)" << endl;
		cout << "Fuel Capacity: " << getFuelCapacity() << " (Liters)" << endl;
		cout << "Consumption: " << getConsumption() << " (Liter / KM)" << endl;
	}
};

//////////////////////////////////////// Trunk Sup CLASS //////////////////////////////////

class Trunk : public Vehicle {

private:
	double weightLimit; //(Kilo grams)

public:
	Trunk()
	{
		setTrunk(0);
	}

	Trunk(double w, string vm, string rn, int s, double fs, double c) :Vehicle(vm, rn, s, fs, c)
	{
		setTrunk(w);
	}

	void setTrunk(double w) {
		setWeightLimit(w);
	}

	void setWeightLimit(double w) {
		weightLimit = w;
	}

	double getWeightLimit() {
		return weightLimit;
	}

	void display() {
		Vehicle::display();
		cout << "Weight Limit: " << getWeightLimit() << endl;
	}
};

//////////////////////////////////////// Bus Sup CLASS //////////////////////////////////

class Bus : public Vehicle {

private:
	int numberOfPassengers;

public:
	Bus()
	{
		setBus(0);
	}

	Bus(int n, string vm, string rn, int s, double fs, double c) :Vehicle(vm, rn, s, fs, c)
	{
		setBus(n);
	}

	void setBus(int n) {
		setNumberOfPassengers(n);
	}

	void setNumberOfPassengers(int n) {
		numberOfPassengers = n;
	}

	int getNumberOfPassengers() {
		return numberOfPassengers;
	}

	void display() {
		Vehicle::display();
		cout << "Number of Passengers: " << getNumberOfPassengers() << endl;
	}
};

int main() {

	Trunk t;
	t.display();

	cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n" << endl;

	Bus b;
	b.display();

	return 0;
}