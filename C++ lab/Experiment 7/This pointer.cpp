#include<iostream>
#include<string>
using namespace std;
class student {
	public:
		string name;
		int roll_no;
		char grade;
		student(string name, int roll_no, char grade) {
			this -> name = name;
			this -> roll_no = roll_no;
			this -> grade = grade;
		}
		void display() {
			cout << name << endl << roll_no << endl << grade << endl;
		}
};
int main() {
	student s1("indhu", 1246, 'A');
	s1.display();
	return 0;
}
