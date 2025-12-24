#include <iostream>

// argument passed by value(by copy)
void myfunc(int x){
    x++;
}

int main(void){
    int a = 100;
    myfunc(a);
    std::cout<<"Value of a: "<<a<<'\n';
}