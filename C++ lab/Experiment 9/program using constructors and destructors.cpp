#include<iostream>
#include<string>
using namespace std;
class A {
	public:
		int a, b, c;
		A() {
			a = 10;
		}
		A(int a, int b, int c) {
			this -> a = a;
			this -> b = b;
			this -> c = c;
		}
		A(A &a1) {
			a = a1.a;
			b = a1.b;
			c = a1.c; 
		}
		void display() {
			cout << a << endl <<  b << endl << c << endl;
		}
		~A() {
			cout << "destructor is called" << endl;
		}
};
int main() {
	A a1(10, 15, 20);
	a1.display();
	A a2(a1);
	return 0;
	
}
