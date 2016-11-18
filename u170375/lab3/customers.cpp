#include <iostream>
using namespace std;
struct customer{
	string name;
	customer *next;
}
customer *create_list(string name){
	
}
void insert_name(customer *head, string name){
	*head.name=name;
}
int list_length(customer *head){
	int i=0;
	while(true){
		if(*head!=NULL){
			i++;
			*head=head.next;	
		}
		else{
			false;
		}
	}
	return i;	
}
void print_customers(customer *head){
	cout<<*head.name;
	if(*head.next!=NULL){
		print_customers(*head.next);
	}
}
