#include <iostream>

int main(void){
    int x = 123;
    {
        int x = 456;
        std::cout<<"Value of x: "<<x<<'\n';
    }
    std::cout<<"value of x:"<<x<<'\n';
}