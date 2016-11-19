#pragma once
class MyComplex {
protected:
	double height;	//protected variables
	double width;
public:
	Rectangle(double,double);
	double getArea()  const;	//public variables and functions
	void setWidth(double width);
	double setHeight(double height);
	void getWidth() const;
	double getHeight() const;
};

