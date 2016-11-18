#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "MyComplex.h"
using namespace std;
double MyComplex::getReal() const {  //getter method
	return this->real;
}
double MyComplex::getImag()  const {  //getter method
	return this->imag;
}
void MyComplex::setImag(double imag) {  //setter method
	this->imag = imag;
}
void MyComplex::setReal(double real) {  //setter method
	this->real = real;
}
const MyComplex MyComplex::operator+(const MyComplex &z) const{ //add function
	MyComplex result;	//store result of addition
	result.setReal(this->real + z.getReal());	//use setter method to set real & imaginary values of 
	result.setImag(this->imag + z.getImag());		//declared variable to addition
	return result;	//return MyComplex object
}
const MyComplex MyComplex::operator-(const MyComplex &z) const{  //subtract function
	MyComplex result;	//store result of subtraction
	result.setReal(this->real - z.getReal());	//use setter method to set real & imaginary values of
	result.setImag(this->imag - z.getImag());		//declared variable to subtraction result
	return result;	//return MyComplex object
}
const MyComplex MyComplex::operator*(const MyComplex &z) const{	//multiplication function
	MyComplex result;	//store result of multiplication
	result.setReal(this->real*z.getReal()-this->imag*z.getImag());	//use setter method to set real & imaginary values of
	result.setImag(this->real*z.getImag()+this->imag*z.getReal());		//declared values to multiplication result
	return result;
}
void MyComplex::print() {
	cout << this->real << "+" << this->imag << "i \n";	//retrieve and print real
}
