#include <iostream>
int mysum(int, int); // in func declaration only, parameter names can be omited

int main(void){
    std::cout<<"hello world!";
    int result = mysum(1,2); // Error, funcs has not been defined yet
    std::cout<<"sum: "<<result<<'\n';
}

int mysum(int x,int y){
    return x+y;
}