#include <iostream>

// argument passed by reference
void myfunc(int& x){
    x++;
}

int main(void){
    int a = 100;
    myfunc(a); // passed the variable itself, not just literal 
    std::cout<<"Value of a: "<<a<<'\n';
}