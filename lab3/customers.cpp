#include <iostream>
using namespace std;
struct customer{
	string name;
	customer *next;
}
customer *create_list(string name){
	customer *c=new customer();
	c->name=name;
	c->next=NULL;
	return c;
}
void insert_name(customer *head, string name){
	customer *cur=head;
	while(cur->next!=NULL){
		cur=cur->next;
	}
	cur->next=create_list(n);
}
int list_length(customer *head){
	int i=0;
	while(head!=NULL){
		i++;
		head=head->next;
	}
	return i;	
}
void print_customers(customer *head){
	cout<<head.name;
	if(head.next!=NULL){
		print_customers(&head.next);
	}
}
