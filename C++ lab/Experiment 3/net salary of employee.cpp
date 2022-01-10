#include<iostream>
#include<string>
using namespace std;
class Employee {
	public:
		char emp_name[10];
		int emp_num;
		float basic_salary;
		float DA;
		float IT;
		float net_salary;
		float gross_salary;
		void read() {
			cout << "enter the details of the employee:" << endl;
			cin >> emp_name >> emp_num >> basic_salary >> gross_salary;
		}
		void display() {
			net_salary = 0.52 * basic_salary + basic_salary - 0.3 * gross_salary;
			cout << net_salary << endl;
			
		}
};
int main() {
	Employee E1[2];
	for(int i = 0; i < 2; i++) {
		E1[i].read();
	}
	for(int i = 0; i < 2; i++) {
		E1[i].display();
	}
	return 0;
}
