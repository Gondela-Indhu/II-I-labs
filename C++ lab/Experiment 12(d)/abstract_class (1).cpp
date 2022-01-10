#include<iostream>
#include<string>
using namespace std;
class Base {
	public:
		int a;
		void read() {
			cout << "enter the value of a:";
			cin >> a;
		}
		virtual void display() = 0;
};
class Derived : public Base{
	public:
		int b;
		Derived() {
			b = 15;
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
		
