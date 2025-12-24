#include <iostream>
#include <string>

int main(void) {
    std::string s = "Alex Spencer";
    // substr(starting_index,length)
    // starting index is included 
    std:: string sub_s =  s.substr(5,7); 
    std::cout<<sub_s<<'\n';
}