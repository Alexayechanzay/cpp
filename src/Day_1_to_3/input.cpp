#include <iostream>

int main(void){
    /*    std::cout<<"Enter a number and press enter: ";
    int x = 0;
    std::cin>>x;
    std::cout<<"You entered "<<x<<'\n'; */

    // accepting multiple inputs (same type)
    /*  std::cout<< "Enter two integers separated by a space and press enter: ";
    int x, y;
    std::cin>>x>>y;
    std::cout<<"x = "<<x<<" y = "<<y<<'\n';*/

     // accepting multiple inputs (diff type)
    std::cout<<"Enter a number, character and decimal number: ";
    int x = 0;
    char c = 'a';
    double y = 1.2;
    std::cin>>x>>c>>y;
    std::cout<<"Number: "<<x<<" Character: "<<c<<" Floating-point: "<<y<<'\n';
}