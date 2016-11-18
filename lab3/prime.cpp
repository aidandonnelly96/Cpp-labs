#include <iostream>
#include <cmath>
using namespace std;
int main () 
{   
 bool prime=true;
 int x=0;
 cin>>x;
    if(x==2){
        cout<<"true";
    }
    for (int i=1; i<=x; i++) {
            if (i%x == 0){
                prime=false;
                break;
            }
            else if (i==sqrt(x)) {
                prime=true;
                break;
            }
        }
   if(prime==true){
		cout<<"true";
	}
   else{
		cout<<"false";
	}
}
