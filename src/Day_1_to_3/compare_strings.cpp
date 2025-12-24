#include <iostream>
#include <string>

int main() {
    // comparing literal string using ==
    std::string s1 = "Hello";
    std::string s2 = "hello";

    if (s1 == s2){
        std::cout<<"Two strings are equal!\n";
    }
    else {
        std::cout<<"They are not equal!\n";
    }
    std::cout<<'\n';
    std::cout<<(s1==s2); // 0 = False
}