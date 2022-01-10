#include<iostream>
#include<exception>
using namespace std;
class exception1 {
	public:
		int a, b;
		void read() {
			cout << "enter the value of a and b";
			cin >> a >> b;
		}
		void calculate(){
			try {
				if(b == 0){
					throw b;
				}
				else if(b > 0){
					cout << "the value is" << a / b << endl;
				}
				else {
					throw b;
				}
			}
			catch(int x) {
				if(b == 0) {
					cout << "divide by zero exception";
				}
				else {
					cout << "value of b should be positive";
			}
		}
			
			catch(...) {
				if(b ==0) {
				
					cout << "divide by zero exception caught";
 				}
 				else {
 					cout << "b should be positive";
 				}
 			}
 			
 	}
 };
 int main() {
 	exception1 obj;
 	obj.read();
 	obj.calculate();
 	return 0;
 }
