#include<iostream>
#include<string>
#define pi 3.14
using namespace std;
class circle {
	public:
	int r;
	void area();
};
int num = 100;
void circle :: area() {
	r = 100;
	cout << pi * r * r << endl;
}
int main() {
	circle c1;
	num = 200;
	std :: cout << ::num << std::endl;
	std::cout << num << std::endl;
	std::cout << c1.area() << std::endl;
	return 0;
}
