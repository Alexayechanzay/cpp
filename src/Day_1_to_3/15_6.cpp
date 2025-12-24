 #include <iostream>
 #include <string>

int main(void) {
    std::string mainString = "John Doe";
    std::string subString1 = mainString.substr(0,4);
    std::string subString2 = mainString.substr(5,3);

    std::cout<<"Main string: "<<mainString<<'\n';
    std::cout<<"Sub string1: "<<subString1<<'\n';
    std::cout<<"Sub string2: "<<subString2<<'\n';
    
}