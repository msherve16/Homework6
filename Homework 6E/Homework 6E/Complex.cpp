//////////////////////
//Morgan Sherve
//June 13, 2014
//Exercise 14.7
///////////////////////

#include <iostream>
#include <string>
using namespace std;

class Complex
{
	public:
		void setRealPart(double real);
		void setImaginaryPart(double imaginary);
		double getRealPart(double& real)const; //can't return two values, need pass by reference
		double getImaginaryPart(double& imaginary)const; // pass by reference
		double add(const Complex& complex)const;
		double subtract(const Complex& complex)const;
		double multiply(const Complex& complex)const;
		double divide(const Complex&)const;
		double abs(const Complex&)const;
		string toString(string s) const;

		Complex();
		Complex(double a, double b);
		Complex (double a);

		//for augumented operators
		Complex& operator +=(const Complex& complex);
		Complex& operator -=(const Complex& complex);
		Complex& operator *=(const Complex& complex);
		Complex& operator /=(const Complex& complex);

		//operator[]
		int& operator[](int index);

		//prefix
		Complex& operator++();
		Complex& operator--();

		//postfix
		Complex& operator++(int dummy);
		Complex& operator--(int dummy);

		//unary
		Complex operator+();
		Complex operator-();

		//<< and >> operators
		friend ostream& operator << (ostream&, const Complex&);
		friend istream& operator >> (istream&, Complex&);


		
	private:
		double real;
		double imaginary;
		int a;
		int b;

		//nonmember for arithmetic operators
		Complex operator+(const Complex& complex);
		Complex operator-(const Complex& complex);
		Complex operator*(const Complex& complex);
		Complex operator/(const Complex& complex);

};

Complex::Complex ()
		{
			int number = 0.0;
		}
Complex::Complex (double a)
		{
			b = 0;
		}


string Complex:: toString(string s) const
{
	int i = sqrt(-1);
	 s = a + b*i;
	return s;
	
}

//set real and imaginary
void Complex::setRealPart (double Real)
{
	real = Real;
	Real = a;
}

void Complex::setImaginaryPart (double Imaginary)
{
	imaginary= Imaginary;
	Imaginary = b*i;
}

//get real and imaginary
double Complex:: getRealPart(double& Real)const
{
	Real = real;
	return Real;
}

double Complex:: getImaginaryPart(double& Imaginary)const
{

	Imaginary = imaginary;
	return Imaginary;
}

//add formula
double Complex :: add(const Complex& complex)const
{
	double getReal();
	double getImaginary();
	Complex answer;
	answer.real = complex.real+real;
	answer.imaginary = complex.imaginary+imaginary;
	return answer.real + answer.imaginary;
}

//subtract formula
double Complex ::subtract(const Complex& complex)const
{
	double getReal();
	double getImaginary();
	Complex answer;
	answer.real = complex.real-real;
	answer.imaginary = complex.imaginary-imaginary;
	return answer.real + answer.imaginary;
}
//multiply formula
double Complex :: multiply(const Complex& complex)const
{
	double getReal();
	double getImaginary();
	Complex answer;
	answer.real = complex.real*real- complex.imaginary*imaginary;
	answer.imaginary = (complex.real*imaginary) + (complex. imaginary*real);
	return answer.real+ answer.imaginary;
}
//divide formula
double Complex :: divide(const Complex& complex)const
{
	double getReal();
	double getImaginary();
	Complex answer;
	answer.real = ((complex.real*imaginary) + (complex.imaginary*real))*(complex.imaginary*imaginary + complex.imaginary*imaginary);
	answer.imaginary = complex.real*real + imaginary*imaginary;
	return answer.real/answer.imaginary;
}
//absolute value formula
double Complex :: abs (const Complex& complex) const
{
	double getReal();
	double getImaginary();
	Complex answer;
	answer.real =complex.real*real + complex.imaginary*imaginary;
	return sqrt(answer.real+answer.imaginary);
}

int& Complex:: operator[](int index)
{
	if (index == 0)
	{
		return a;
	}
	else if (index == 1)
	{
		return b;
	}


}

int main()
{

	double setImaginary (double Imaginary);
	double setReal(double Real);
	Complex complex1(double a1,double b1), complex2(double a2, double b2);

	cout << "Please enter a complex number: ";
	cin >> complex1; 

	

	cout << "Please enter a complex number: ";
	cin >> complex2; 
	
	double add(complex1, complex2);
	double subtract(complex1, complex2);
	double multiply(complex1, complex2);
	double divide(complex1, complex2);
	double abs(complex1, complex2);

	return 0;
}



