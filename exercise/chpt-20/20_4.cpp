#include <iostream>
#include <string>

void custommessage(const std::string& s){
    std::cout<<"Hello, "<<s<<'\n';
}

int main(void) {
    std::string name = "Alex";
    custommessage(name);
}