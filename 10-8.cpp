#include <iostream>
using namespace std;

class Complex{
	public:
	Complex(){real=0;imag=0;}
	Complex(double r,double i){real=r;imag=i;}
	Complex operator + (Complex &c2);
	friend ostream& operator <<(ostream&, Complex&);
	friend istream& operator >>(istream&, Complex&);

	
	private:
	double real;
	double imag;
	};

Complex Complex::operator + (Complex &c2){
	return Complex(real + c2.real,imag+ c2.imag);

	}

ostream &operator <<(ostream &output, Complex &c){
	output<<"("<<c.real<<"+"<<c.imag<<"i)"<<endl;
	return output;
	}

istream &operator >>(istream &input, Complex &c){
	cout<<"input real part and imag. part: ";
	input>>c.real>>c.imag;
	return input;
	}

int main(){
	Complex c1,c2;
	cin>>c1>>c2;
	cout<<"c1= "<<c1<<endl;
	cout<<"c2= "<<c2<<endl;

	return 0;
	}
