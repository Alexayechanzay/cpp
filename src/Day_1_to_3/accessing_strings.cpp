#include <iostream>
#include <string>

int main(void){
    /* accessing characters using 
    1. [] operator 2. via member function .at(index)*/

    std::string s = "hello world!";
    char s0 = s[0];
    char s0_func = s.at(0);

    std::cout<<s0<<' '<<s0_func<<'\n';
}