#include <iostream>

int main(void){
/*    int x = 123;
    int y = x;
    std::cout<< "x = " << x << "y = " << y << std::endl;

    x = 678;
    x = y;
    std::cout<< "x = " << x << "y = " << y << std::endl;*/
    
    int x = 10; //decimal literal
    int y = 012; //octal literal (begins with 0)
    int z = 0xA; //hexadecimal literal (begins with 0x)

    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
    std::cout<<z<<std::endl;
}