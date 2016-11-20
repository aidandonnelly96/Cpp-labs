#include <iostream>
#include <string>
using namespace std;

template <class T>
void print(T a[], int b) {
	for(int i=0; i<b; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main () {
  double i[4]={1,2,3,4};
  int j=sizeof(i)/sizeof(i[0]);
  string s1[2]={"hello","world"};
  int k=sizeof(s1)/sizeof(s1[0]);
  print<double>(i,j);
  print<string>(s1,k);
  return 0;
}