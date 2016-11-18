#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "MyComplex.h"
using namespace std;

int main(){
	MyComplex c1, c2;
	double real1, real2;
	double imag1, imag2;
	cout << "Enter real1: ";
	cin >> real1;
	cout << "Enter imag1: ";
	cin >> imag1;
	cout << "Enter real2: ";
	cin >> real2;
	cout << "Enter imag2: ";
	cin >> imag2;
	c1.setReal(real1);	//call setter functions on user input values
	c1.setImag(imag1);
	c2.setReal(real2);
	c2.setImag(imag2);
	MyComplex addition = c1+c2;
	MyComplex subtraction = c1-c2;
	MyComplex multiplication = c1*c2;
	cout << "c1+c2:";
	addition.print();	//call print function on addition value
	cout << "c1-c2: ";
	subtraction.print();	//call print function on subtraction value
	cout << "c1*c2: ";
	multiplication.print();	//call print function on multiplication value
}
