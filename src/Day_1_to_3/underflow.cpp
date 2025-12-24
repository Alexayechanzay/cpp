#include <iostream>

int main() {
    // A short maxes out at 32767
    short score = -32768;
    std::cout << "Original score: " << score << "\n";

    // subtract 1 to underflow it
    score = score - 1;
    std::cout << "After adding 1: " << score << "\n"; // This will print -32768!

    return 0;
}