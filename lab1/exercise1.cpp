#include <iostream>

using namespace std;

int main(){
  int num1,num2,num3;
  cin>>num1;
  cin>>num2;
  cin>>num3;
  cout<< (num1+num2+num3)/3;
  cout<<"\n";
  cout<< (num1+num2+num3);
  cout<<"\n";
  if(num1>=num2 && num1>=num3){
	cout<<(num1);	
   }
  else if(num2>=num1 && num2>=num3){
	cout<<(num2);
   }
  else{
	cout<<(num3);	
  }
  cout<<"\n";
  if(num1<=num2 && num1<=num3){
	cout<<(num1);	
   }
  else if(num2<=num1 && num2<=num3){
	cout<<(num2);
   }
  else{
	cout<<(num3);	
  }
  cout<<"\n";
}
