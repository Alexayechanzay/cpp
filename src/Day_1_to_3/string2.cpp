#include <iostream>
#include <string>
// using namespace std; // avoid using namespace to avoid name collision

int main(void){
    std::string s1 = "Hello";
    char c = '!';
    int x = 65; 
    s1 += c;
    s1 += x; // int 65 is treated as ASCII value, A
    std::cout<<s1<<'\n';
    std::cout<<sizeof(std::string)<<std::endl;
}
// type string is also caleld "class-template"