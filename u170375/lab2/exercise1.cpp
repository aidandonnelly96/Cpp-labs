#include <iostream>

using namespace std;

void my_swap(int num1, int num2){
	num1=num1^num2;		//A^B,B^A,A^B swaps A and B without the need for a temp variable
	num2=num2^num1;
	num1=num1^num2;
	cout<<num1<<"\n";
	cout<<num2<<"\n";
}


int main(){
	int num1,num2;  //initialize variables
	cin>>num1;	//read user input
	cin>>num2;
	my_swap(num1,num2);	//function call
}

