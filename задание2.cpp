#include <iostream>
using namespace std;

int main() {
	double salary, percent, bonus, total;

	cout << "Enter salary: ";
	cin >> salary;

	cout << "Enter bonus percent: ";
	cin >> percent;

	bonus = salary * percent / 100;
	total = salary + bonus;

	cout << "Bonus: " << bonus << endl;
	cout << "Total: " << total << endl;

	return 0;
}