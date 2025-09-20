#include <iostream>
using namespace std;

int main() {
	const int size = 20;
	int *salArray = new int[size];
	int *ptr = salArray;

	// Input salaries
	for (int i = 0; i < size; i++) {
		cout << "Enter Salary for employee " << (i + 1) << ": ";
		cin >> *(ptr + i);
	}
	// Apply increment formula
	for (int i = 0; i < size; i++) {
		*(ptr + i) = *(ptr + i) + *(ptr + i) / (i + 1);
	}

	// Display updated salaries
	cout << "\nUpdated Salaries: ";
	for (int i = 0; i < size; i++) {
		cout << *(ptr + i) << " ";
	}
	cout << endl;

	return 0;
}

