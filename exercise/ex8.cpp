#include <iostream>

int main(void) {
    double num[] = {1.22,3.234,5.234,234.243,2.2};
    num[0] = 3.148;
    num[4] = 1.1111;

    std::cout<< "The first element: "<<num[0]<<" The second element: "<<num[4]<<'\n';
}