#include <iostream>
#include <string>
using namespace std;

int main(){
  string num1;
  cin>>num1;
  if(num1.length()!=5){
	cout<<"Number must be five digits";
  }
  else{
	for(int i=0; i < 5; i++){
	   cout<<(num1[i]);
	   cout<<"   ";
	}
  }
}
