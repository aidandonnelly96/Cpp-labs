#include <iostream>

using namespace std;

int gcd(int num1, int num2){
	int x,lcd;
	if(num1>=num2){
		x=num2;		//only need to increment to the smallest of the two values
	}
	else{
		x=num1;
	}
	for(int i=1; i <= x; i++){
		if(num1%i==0 && num2%i==0){	//checks divisibility for both values
			lcd=i;		//stores new largest divisor 
		}
	}
	return lcd;	//following loop, value in lcd is returned
}


int main(){
	int num1,num2;	//initialize variables
	cin>>num1;	//read user input
	cin>>num2;
	int n=gcd(num1,num2);	//function call
	cout<<n<<"\n";
}

