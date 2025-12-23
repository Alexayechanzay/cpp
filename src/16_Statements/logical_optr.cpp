#include <iostream>

int main(){
    bool a = true, b = true;
    // (&& AND) (|| OR) (! NOT)
    if (!a) std::cout<< "The condition is false\n";

    if (a || b) std::cout << "The entire condition is ture!\n";
    else std::cout<< "Both a and b are false!\n";

    if (a && b) std::cout<< "Both a and b are true!\n";
    else std::cout<<"either one or both is false!\n";
}
// comparison operators
// <,>,==,<=,>=