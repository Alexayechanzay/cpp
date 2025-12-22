#include <iostream>

int main(void) {
    double mydouble = 3.142;
    double& myreference = mydouble;
    myreference = 1.2345;

    std::cout<<"value of myreference: "<<myreference<<'\n';
    std::cout<<"value of mydouble: "<<mydouble<<'\n';

    mydouble = 4534.4342;
    std::cout<<"value of myreference: "<<myreference<<'\n';
    std::cout<<"value of mydouble: "<<mydouble<<'\n';
}