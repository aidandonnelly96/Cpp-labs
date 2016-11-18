#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <time.h>
#include <string.h>

using namespace std;

int my_string_len(char str[]){
	int n=0;
	int i=0;
	while(true){	//until we reach '\0' value
		if(str[i]=='\0'){	//
			return i;	//we've reached null value, therefore string has ended.
			false;	//stop loop
		}
		else{
			i++;	//increment length value
		}
	}
}

void my_string_cat(char dest[], char src[], int dest_size){
	int j=0;
	if(my_string_len(dest)+my_string_len(src)<dest_size){	//if string fits, continue
			for(int i=my_string_len(dest);i<dest_size;i++){		//start at end of string
				dest[i]=src[j];		//concatenate strings char by char
				j++;		//increment source position
			}
		cout<<dest<<"\n";
	}
	else{
		cout<<"Content doesn't fit\n";	
	}
}

int main(){
	char s1[20]="Hello World";	//
	char s2[]="Goodbye";		//
	cout<<"String 1 length: "<<my_string_len(s1)<<"\n";	//
	cout<<"String 2 length: "<<my_string_len(s2)<<"\n";	//
	cout<<sizeof(s1)<<"\n";		//
	my_string_cat(s1,s2,sizeof(s1));	//
}
