#include<iostream>
#include<string>
using namespace std;
class base {
	public:
		int a;
		void read() {
			cout << "enter the value of a:";
			cin >> a;
		}
		void display() {
			cout << "value of a:" << a << endl;
		}
};
class Child : public base {
	public:
		int b;
		Child() {
			a = 10;
		} 
		void read() {
			cout << "enter the value of b:";
			cin >> b;
		}
		void display() {
			cout << "value of a" <<  a << "value of b" << b << endl;
		}
};
int main() {
	base obj;
	Child obj1;
	obj.read();
	obj.display();
	obj1.read();
	obj1.display();
	return 0;
}
