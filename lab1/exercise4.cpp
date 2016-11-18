#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
	int number=0;
	int balance, charged, applied, allowed;
	bool truf=true;
	while(truf){
		number=balance=charged=applied=allowed=0;
		cin>>number;
		if(number==-1){
			exit(1);
		}
		else{
			cin>>balance;
			cin>>charged;
			cin>>applied;
			cin>>allowed;
		}
		if((balance+(charged-applied))>=allowed){
			cout << "Account Number " << number << "\n";
			cout << "Credit Limit " << allowed << "\n";
			cout << "New Balance " << balance+(charged-applied) << "\n";
			cout << "Credit Limit Exceeded \n";

		}
	}	
}
