#include <iostream>

int main(void){
    int* ptr = new int; //allocate space for int obj
    *ptr = 123;
    std::cout<<"The pointed-to value is : "<<*ptr<<'\n';
    std::cout<<"Memory location: "<<ptr<<'\n';
    delete ptr;//deallocate the memory manually

    std::cout<<ptr<<' '<<*ptr;
}