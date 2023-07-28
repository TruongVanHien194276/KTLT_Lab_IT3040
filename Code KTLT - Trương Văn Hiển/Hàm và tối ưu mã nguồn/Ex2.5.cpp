/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include <iostream>
#include <ostream>
#include <math.h>
#include <iomanip> 

using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex operator + (Complex a, Complex b) {
    Complex tmp;
    tmp.real = a.real + b.real;
    tmp.imag = a.imag + b.imag;
    return tmp;
}

Complex operator - (Complex a, Complex b) {
    Complex tmp;
    tmp.real = a.real - b.real;
    tmp.imag = a.imag - b.imag;
    return tmp;
}

Complex operator * (Complex a, Complex b) {
    Complex tmp;
    tmp.real = a.real*b.real - a.imag*b.imag;
    tmp.imag = a.real*(b.imag) + a.imag*b.real;
    return tmp;
}

Complex operator / (Complex a, Complex b) {
    Complex tmp;
    b.imag = -b.imag;
    tmp = a*b;
    tmp.real = tmp.real/(b.real*b.real + b.imag*b.imag);
    tmp.imag = tmp.imag/(b.real*b.real + b.imag*b.imag);
    return tmp;
}

ostream& operator << (ostream& out, const Complex &a) {
    out << '(' << std::setprecision(2) << a.real << (a.imag >= 0 ? '+' : '-') << std::setprecision(2) << fabs(a.imag) << 'i' << ')';
    return out;
}

int main() {
    double real_a, real_b, img_a, img_b;
    cin >> real_a >> img_a;
    cin >> real_b >> img_b;
    
    Complex a{real_a, img_a};
    Complex b{real_b, img_b};
    
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    
    return 0;
}