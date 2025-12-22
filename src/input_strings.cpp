#include <iostream>
#include <string>

int main(void){
    std::string s;
    std::cout<< "Please enter a stirng: ";
    std::getline(std::cin, s); // input using std::getline(read_from, into)
    std::cout<< "You entered: " << s;
}