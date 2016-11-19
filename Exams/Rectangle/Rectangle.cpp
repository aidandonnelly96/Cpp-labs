#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle(double width, double height){
	setHeight(height);
	setWidth(width);
}
int Rectangle::getArea(){
	return this->width*this->height;	//getter function
}
int Rectangle::getWidth(){
	return this->width;	//getter function
}
int Rectangle::getHeight(){
	return this->height;	//getter function
}
void Rectangle::setHeight(double height){
	this->height = height;
}
void Rectangle::setWidth(double width){
	this->width = width;
}
