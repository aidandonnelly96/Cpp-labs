#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "Rectangle.h"
using namespace std;

int main(){
	double width, height;
	cout << "Enter width: ";
	cin >> width;
	cout << "Enter height: ";
	cin >> height;
	Rectangle *r1=new Rectangle(width,height);
	Rectangle r2;
	r2.setWidth(width);
	r2.setHeight(height);
	cout<<r1.getHeight();
	cout<<r1.getWidth();
	cout<<r1.getArea();
}