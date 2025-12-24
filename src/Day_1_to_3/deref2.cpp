#include <iostream>

int main(void){
    int x = 123;
    int* p = &x;
    std::cout<<"Before "<<*p<<std::endl;
    *p = 456;
    std::cout<<"After "<<*p<<std::endl;
}