#include<iostream>
#include <cmath>
#include <numbers>
#include <format>
using namespace std;

int main() {
	double h_inches{0};
	double feet_d{0};
	double inches_d{0};
	double angle{ 0 };

	cout << "Please, enter the heigth in inches, distance in feet and inches and angle in degrees" << endl;
	cout << "H: ";
	cin >> h_inches;
	cout << ", D (feet): ";
	cin >> feet_d;
	cout << ", D (inches): ";
	cin >> inches_d;
	cout << ", A: ";
	cin >> angle;
	cout << endl;

	int inches{ 12 };
	double inches_coverting = feet_d *inches;
	inches_d += inches_coverting;
	double formula = static_cast<double>((h_inches + (inches_d * tan(angle)))/ inches);
	
	cout << format("The height of the tree is equal to {:.2f} feet. ", formula);

	return 0;
}