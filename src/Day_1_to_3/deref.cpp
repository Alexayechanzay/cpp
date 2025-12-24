#include <iostream>

int main(void) {
    int x = 123;
    int* p = &x;
    std::cout<<"The address of var x: "<<p<<'\n';
    std::cout<<"The value of var x: "<<*p<<'\n';
}