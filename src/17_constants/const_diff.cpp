#include <iostream>

int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;

    // SCENARIO A
    const int runtimeConst = x; // This works! 
    
    // SCENARIO B
    // constexpr int compileTimeConst = x; // ERROR! 
}