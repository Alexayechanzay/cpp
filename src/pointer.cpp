#include <iostream>

int main(void){
    //declare a pointer of type int
    int x = 123;
    int* p = &x; // use address-of operator &
    std::cout<<p<<'\n';

    char* p = nullptr; // pointer that points to nothing. (null pointer)
}

/*A pointer is just a variable that stores a memory address.
 (*) = dereferenceing operator */