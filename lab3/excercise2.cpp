#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
void print_array(double *arr, int size){
    double num=0;
    bool x=true;
    int startsize=size-10;
    double nArr[size+10];
    cout<<size;
    int i,count=0;
    for(i=0;i<size+10;i++){
        nArr[i]=0;    
    }
    while(x){
        cout<<"\nEnter number: ";
        cin>>num;
        if(num==-1){
            break;    
        }
        else if(count+startsize>size-1){
            for(i=0;i<=size;i++){
                nArr[i]=arr[i];    
            }
            print_array(nArr,size+10);
            x=false;
        }
        else{
            arr[startsize+count]=num;
            count++;
        }
    }
    for(i=0; i<size;i++){
	if(arr[i]!=0){
		cout<<arr[i]<<"\n";
	}
                
    }
    cout<<size;
    exit(1);
}
int main()
{
    int size=10;
    double arr[10];
    for(int i=0;i<size;i++){
        arr[i]=0;    
    }
    print_array(arr,size);
}

