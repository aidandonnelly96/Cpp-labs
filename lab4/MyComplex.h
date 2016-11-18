#pragma once
class MyComplex {
protected:
	double real;	//protected variables
	double imag;
public:
	double getReal()  const;	//public variables and functions
	void setReal(double real);
	double getImag()  const;
	void setImag(double imag);
	MyComplex Add(const MyComplex &z);
	MyComplex Subtract(const MyComplex &z);
	MyComplex Multiply(const MyComplex &z);
	const MyComplex operator+(const MyComplex &cell) const;
	const MyComplex operator-(const MyComplex &cell) const;
	const MyComplex operator*(const MyComplex &cell) const;
	void print();
};

