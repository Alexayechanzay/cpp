#include <iostream>

int division(int x,int y){
    return x / y;
}

double division(double x,double y){
    return x / y;
}

int main(void){
    int x =10,y=2.22;
    std::cout<<"Integer division overload: "<<division(x,y)<<'\n';

    double b=3.14592659, a=100145;
    std::cout<<"Double division overlaod: "<<division(a,b)<<'\n';
}