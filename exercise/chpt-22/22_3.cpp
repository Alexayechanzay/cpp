#include <iostream>

int main(){
    int x = 123;// automatic storage duration
    int* p = new int{x};//allocate memory and copy the value of x
    delete p;
}