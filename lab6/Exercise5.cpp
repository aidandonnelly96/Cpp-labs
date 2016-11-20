#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <class T>
void print(vector<T> v){
    typename vector<T>::iterator i;  // iterator to iterate over coll
    typename vector<T>::const_iterator j(v.end());  // end position

    for (i=v.begin(); i!=j; ++i) {
        cout << *i << ' ';
    }
    cout << "\n";
}

int main () {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    vector<string> s1;
    s1.push_back("Hello");
    s1.push_back("World");
    s1.push_back("!");
    print<int>(v);
    print<string>(s1);
}