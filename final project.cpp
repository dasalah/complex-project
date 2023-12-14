using namespace std;
#include<iomanip>
#include<iostream>
#include<cmath>
#include<wchar.h>

typedef struct {
		// complex struct
	double real;
	double imag;

}complex;

complex Division(complex A, complex B); // sign 
complex multyply(complex q, complex w);
void Add(complex c1, complex c2);
void Minus(complex m1, complex m2);
complex multyply(complex q, complex w);

void print(complex P) {
	cout << P.real;
	if (P.imag != 0) {
		if (P.imag > 0) cout << "+";
		cout << P.imag << "i" << endl;
	}
}



static void polar(complex a) {

	float r;
	r = sqrt(pow(a.real, 2) + pow(a.imag, 2));
	float e;
	float y;
	float teta;
	y = a.imag / a.real;
	e = atan(y);
	teta = atan(y)*180/ 3.14159265;
	cout << "z = " << r << "e^(" << teta << ")";
	
}


complex Division(complex A, complex B) { //division
	complex C;
	C.real = A.real/ pow(A.imag, 2) + pow(B.imag, 2);
	C.imag = B.real / pow(A.imag, 2) + pow(B.imag, 2);
	print(C);
	return C;
}

void Add(complex c1, complex c2) {
	complex c3;
	c3.real = c1.real + c2.real;
	c3.imag = c1.imag + c2.imag;
	print(c3);
}

void Minus(complex m1, complex m2) {
	complex m3;
	m3.real = m1.real - m2.real;
	m3.imag = m1.imag - m2.imag;
	print(m3);
}

complex multyply(complex q, complex w) {
	complex d4;
	d4.real = (q.real * w.real) - (q.imag * w.imag);
	d4.imag = (q.real * w.imag) + (q.imag * w.real);
	print(d4);
	return d4;
}

int main() {
	
	char value;

	complex a;
	cout << "enter real number complex1: ";
	cin >> a.real;
	
	cout << "enter imag number complex1: ";
	cin >> a.imag;
	cout << "enter your operation:";
	cin >> value;
	complex b;
	cout << "enter real number complex2: ";
	cin >> b.real;
	cout << "enter imag number complex2: ";
	cin >> b.imag;
	
	switch (value) {

	case '+'  :
		Add(a, b);
		break;

	case '-':
		Minus(a, b);
		break;

	case '*':
		multyply(a, b);
		break;

	case'/':
		Division(a, b);
		break;
	case'^':
		polar(a);
		break;
	}

}
