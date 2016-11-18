#include <iostream>
#include <cmath>
using namespace std;
int main () 
{
    for (int i=1; i<5000; i++) 
        for (int j=2; j*j<=i+1; j++)
        {
            if (i % j == 0) 
                break;
            else if (j+1 > sqrt(i)) {
                cout << " " << i;
            }
        }
    cout << "\n";   
    return 0;
}
