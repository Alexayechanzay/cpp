#include <iostream>
#include <string>

int main(void){
    std::string s = "I love C++ Language";
    std::string search_s = "d";
    // funcs type is std::string::size_type
    std::string::size_type found = s.find(search_s);

    if (found != std::string::npos){
        std::cout<< "Sudstring found at index: "<< found<<'\n';
    }
    else {
        std::cout<< "Substring not found!\n";
        std::cout<< "Value of std::string::npos = "<< found;
    }
    std::cout<<'\n';
}
