#include <iostream>
#include <string>

int main(void){
    std::string s = "Hello C++ World.";
    auto found = s.find("C++");
    if (found != std::string::npos){
        std::cout<<"C++ is found at index: "<<found<<'\n';
    }
    else {
        std::cout<<"C++ is not found!"<<'\n';
    }
}