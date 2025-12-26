#include <iostream>

int main(void){
    /*placed on the heap: Dynamic storage duration*/
    int* p = new int{123};
    std::cout<<"The pointed-to value is "<<*p<<'\n';
    delete p;
}