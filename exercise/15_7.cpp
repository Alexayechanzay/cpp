#include <iostream>
#include <string>

int main(void) {
    std::string s = "Hello C++ World";
    std::string::size_type found = s.find('C');
    
    if (found != std::string::npos) {
        std::cout<<"C is found at index: "<<found;
    }
    else {
        std::cout<<"C is not found";
    }
}