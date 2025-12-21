#include <iostream>

int main(void) {
    char c = 'a';
    char* p = &c;
    char d = *p; // dereferencing pointer p 
    // Use (void*) to force the address to print in Hexadecimal
    std::cout<<"Address of var c: "<<(void*)p<<'\n';
    std::cout<<"Value of var c: "<<d<<'\n';
}