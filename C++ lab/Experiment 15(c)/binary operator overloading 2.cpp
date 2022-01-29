#include<iostream>
using namespace std;
class A {
    public:
        int n;
        A() {
            cout << "enter the value of n:";
            cin >> n;
        }
        void operator +(A);
        
};
void A :: operator +(A a) {
    int m;
    m = a.n + n;
    cout << m;
}
int main() {
    A a1, a2;
    a1 + a2;
    return 0;
    
}
