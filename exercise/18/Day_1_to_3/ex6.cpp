#include <iostream>

int main(void){
    std::cout<<"Please enter two numbers: ";
    int x,y;
    std::cin>>x>>y;
    int z = x + y;
    std::cout<<x<<" + "<<y<<" = "<<z<<'\n';
}