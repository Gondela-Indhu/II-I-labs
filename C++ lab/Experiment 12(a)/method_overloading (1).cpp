#include<iostream>
#include<string>
using namespace std;
class A {
	public:
		int a, b;
		void read() {
			cout << "enter the value of a and b";
			cin >> a >> b;
		}
		void display() {
			cout << "value of a" << a << endl;
		}
		void display(int a, int b) {
			cout << "value of a" << a << endl << "value of b" << b << endl;
		}
		int display(int a) {
			return (float)a;
			cout << endl;
		}
		int increment() {
			return a + 1;
			cout << endl;
		}
		void increment(int a) {
			cout << "incremented value of a" << a + 1 << endl;
		}
			
		
};
int main() {
	A obj;
	obj.read();
	obj.display();
	cout << obj.display(obj.a) << endl;
	obj.display(obj.a, obj.b);
	cout << obj.increment() << endl;
	obj.increment(obj.a);
	return 0;
}
	
	
		
		
