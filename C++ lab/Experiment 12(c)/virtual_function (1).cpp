#include<iostream>
#include<string>
using namespace std;
class Base {
	public:
		int a;
		virtual void read() {
			cout << "enter the value of a:";
			cin >> a;
		}
		virtual void display() {
			cout << "value of a is:" << a << endl;
		}
};
class Derived : public Base{
	public:
		int b;
		void read() {
			cout << "enter the value of b:";
			cin >> b;
		}
		void display() {
			cout << "value of b" << b << endl;
		}
};
int main() {
	Base *ptr;
	Derived obj;
	ptr = &obj;
	ptr -> read();
	ptr -> display();
	return 0;
}
		
