#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char name[100], section[100];
	ofstream fp("file1.txt");
	cout << "enter the name" << endl;
	cin.getline(name, 100);
	cout << "enter the section";
	cin.getline(section, 100);
	if(fp.is_open()) {
		fp << "my name is " << name << endl;
		fp << "i am from " << section;
		fp.close();
	}
	else {
		cout << "file is not opened";
	}
	ifstream fp1;
	string name_1, section_1;
	fp1.open("file1.txt");
	while(getline(fp1, name_1)) {
	    cout << name_1 <<  endl << section_1;
	}
	fp1.close();
	return 0;
	
	
}
