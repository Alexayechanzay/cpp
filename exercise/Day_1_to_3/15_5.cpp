#include <iostream>
#include <string>

int main(void) {
    std::string firstName, lastName;
    std::cout<<"Enter the first name: ";
    std::getline(std::cin, firstName);
    std::cout<<"Enter the last name: ";
    std::getline(std::cin, lastName);

    std::cout<<"First name: "<<firstName<<" Last name: "<<lastName<<'\n';

}