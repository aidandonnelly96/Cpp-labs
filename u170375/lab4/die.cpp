#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "die.h"
using namespace std;
int die::getValue(){
	return this->value;	//getter function
}
int die::getNumSides(){
	return this->sides;	//getter function
}
void die::roll(){
	int n=this->getNumSides();
	int n1=rand()%n+1;
	cout<<n1<<"\n";
	this->value=n1; //set roll value to this die object
}
