#include <iostream>

int main(void) {
    /*do {execute code at least once} while (condition); */
    int x = 0;
    do {
        std::cout<< "Counter: "<<x<<'\n';
        x++;
    } while(x<10);
}