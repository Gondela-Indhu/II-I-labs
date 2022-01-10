#include<iostream>
#include<string>
using namespace std;
class Employee {
	public:
	int emp_num;
	char emp_name[10];
	float basic_salary;
	float DA, IT, net_salary;
	void read() {
		cout << "enter the details of the student:";
		cin >> emp_num >> emp_name >> basic_salary >> DA >>  IT;
	}
	void display() {
		net_salary = DA + basic_salary - IT;
		cout << net_salary;
	}
};
int main() {
	Employee E1;
	E1.read();
	E1.display();
	return 0;
}
