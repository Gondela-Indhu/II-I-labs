#include<iostream>
#include<string>
using namespace std;
struct student {
		char name[10];
		int roll_no;
		char grade;
}s1;
int main() {
	cout << "details of a student:";
	cin >> s1.name >> s1.roll_no >> s1.grade;
	cout << s1.name << endl << s1.roll_no << endl << s1.grade << endl;
	return 0; 
}
