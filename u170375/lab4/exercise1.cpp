#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "die.h"
using namespace std;
int main(){
	srand(time(NULL));
	int sides,i,j;		
	cout<<"Number of sides required: ";
	cin>>sides;
	if(sides<4){
		sides=6;
		cout<<"Too low, defaulting to 6";
	}
	cout<<"Number of rolls required: ";
	int num1;	//initialize
	cin>>num1;
	die d[num1];	//array of dice to store values
	for(i=0; i<num1;i++){
		d[i].sides=sides;	//limit sides
	}
	for(j=0; j<num1; j++){
		cout<<"Roll "<<j+1<<": ";
		d[j].roll();	//call roll function on each die
	}
	double x[num1];	
	for(i=0; i<=num1;i++){
		x[i]=0;
	}
	for(i=0;i<num1;i++){
		x[d[i].value]++;	//store count of each value
	}
	for(i=1;i<=sides;i++){
		cout<<"Number of occurences of "<<i<<": "<<x[i]<<"\n";
	}
	for(int j=1; j<=sides; j++){
		double n=(x[j]/num1)*100;	//calculate percentages
		cout<<n<<"% \n";
	}
}

