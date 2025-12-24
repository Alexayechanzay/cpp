#include <iostream>
#include <string>

int main(void){
    const int x = 3;
    const double d = 3.148;
    const std::string s = "The const Type QUalifier";
    const int y = x;

    std::cout<<x<<' '<<d<<' '<<s<<' '<<y<<'\n';
}