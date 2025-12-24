#include <iostream>

int main(void) {
    int x = 1, y =2;
    int* p1 = &x;
    int* p2 = &y;
    int* tempP = nullptr;
    std::cout<<"The value of p1: "<<p1<<"\nThe value of p2: "<<p2<<'\n';
    // swap the addresses
    tempP = p1;
    p1 = p2;
    p2 = tempP;
    // dereferencing the pointers
    std::cout<<"The value of p1: "<<p1<<"\nThe value of p2: "<<p2<<'\n';

}