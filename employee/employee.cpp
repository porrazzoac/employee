// employee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Employee
{
private:
	char fname[50];
	char lname[50];
	bool isExempt;
	double compensation;
public:
	Employee();
	void getData();
	void showData();	
};
//constructor
Employee::Employee()
{
	isExempt = true;
	compensation = 0;
}

void Employee::getData()
{
	char answer;
	cout << "first name?" << endl;
	cin.getline(fname, 50);
	cout << "last name?" << endl;
	cin.getline(lname, 50);
	cout << "is the employee exempt enter Y" << endl;
	cin >> answer;
	if (answer == 'Y' || answer == 'y')
		isExempt = true;
	else
		isExempt = false;
	cout << "compensation ?" << endl;
	cin >> compensation;
}

void Employee::showData()
{
	cout << "your employee: " << endl;
	cout << fname << " " <<lname << endl;
	if (isExempt)
		cout << "exempt employee" << endl;
	else 
		cout << "hourly employee"<< endl;
	cout << "compensation" << endl;
}
int main()
{
	Employee emp1;
	emp1.getData();
	emp1.showData();



	//

	system("pause");
	return 0;
}

// Run 
