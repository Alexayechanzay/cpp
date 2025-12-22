#include <iostream>
#include <string>

int main(void) {
    int x = 123;
    auto& y = x; // y is of int& type
    std::cout<<y;
}