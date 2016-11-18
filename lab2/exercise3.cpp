#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

using namespace std;

int roll(int num1){
	double x[]={0,0,0,0,0,0,0,0,0,0,0,0,0};		//initialize array to store rolled numbers	
	srand(time(NULL));		//seed the random function
	for(int i=0; i<num1; i++){	//rolls according the users specified number
		int n1=rand()%6+1;	//two random ints between 1 and 6
		int n2=rand()%6+1;
		x[n1+n2]=x[n1+n2]+1;	//increments total value between dice
		cout<<n1<<", ";
		cout<<n2<<"\n";
	}
	cout<<"\n";
	for(int j=2; j<13; j++){
		double n=(x[j]/num1)*100;	//calculate percentage, num1 is the total number of rolls
		cout<<n<<"% \n";
	}
}

int main(){
	int num1;	//initialize
	cin>>num1;	//read input
	roll(num1);	//function call
}
