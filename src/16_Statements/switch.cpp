#include <iostream>

int main(void) {
    int x = 3;
    switch (x)
    {
    case 1:
        std::cout<<"The value of x is 1.";
        break;
    case 2:
        std::cout<<"The value of x is 2.";
        break;
    case 3:
        std::cout<<"The value of x is 3.";
        break;
    default: // if none of the above, then default code is executed.
        std::cout<<"The value is none of the above.";
        break;
    }
}