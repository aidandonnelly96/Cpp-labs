#include "customer.h"
#include <iostream>
#include <string>
using namespace std;
int main(){
	customer customer1, customer2, customer3;
	insert_name(&customer1, "Jack");
	insert_name(&customer2, "Jill");
	cout<<list_length(customer1);
	print_customers(customer1);
	
}


