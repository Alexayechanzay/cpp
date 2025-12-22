#include <iostream>
using namespace std;


int main(void){
    int x = 123;
    const int& y = x; // const ref

    x = 456; // ERROR: You cannot modify x through 'ref'
    cout<<x<<" Value of ref y: "<<y<<endl;
}