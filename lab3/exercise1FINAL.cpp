#include <iostream>

using namespace std;

int main(){
	int num1; //initialize variables
	cout<<"How many numbers? \n";
	cin>>num1;	//read user input
	double arr[num1];
	for(int i=0; i<num1;i++){
		cout<<"Enter value: ";
		cin>>arr[i];
	}
	for(int j=num1-1;j>=0;j--){
		cout<<arr[j]<<"\n";
	}
}

