#include <iostream>
#include <stdlib.h>
using namespace std;
struct user{
	int age;
	string name;
	user *prev;
};
void print_users(user &now){
	user *cur=&now;
	while(cur!=NULL){
		cout<<cur->name<<", "<<cur->age<< endl;
		cur=cur->prev;
	}
}
int main(){
	int num=0;
	cout<<"Enter number of users: ";
	cin>>num;
    	user arr[num];
	string name="";
	int age=0;
	for(int i=0; i<num;i++){
		cout<<"\nEnter name:";
		cin>>name;
		cout<<"\nEnter age: "; 
		cin>>age;
		arr[i].name=name;
		arr[i].age=age;
		if(i>0){
			arr[i].prev=&arr[i-1];
			
		}
		else if(i==0){
			arr[i].prev=NULL;
		}
	}
	if(num>0){
		print_users(arr[num-1]);
	}
	
}


