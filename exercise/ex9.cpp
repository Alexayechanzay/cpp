#include <iostream>

int main(void){
    double d = 3.142;
    double* dptr = &d;
    std::cout<<"The value of pointed-to object: "<<*dptr<<'\n';
    std::cout<<"The memory address of dptr: "<<dptr<<'\n';
}