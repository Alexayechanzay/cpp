#include <iostream>

int main(){
    /* double pi = 3.148;
    std::cout<< "The value of pi is "<<pi<<std::endl;
    std::cout<<"Number of bytes for double data type is "<<sizeof(double)<<'\n'; */
    
    std::cout<<sizeof(unsigned); // 4 bytes
    std::cout<<sizeof(signed); // 4 bytes
    std::cout<<sizeof(short); // 2 bytes
    std::cout<<sizeof(long); // 8 byes

    unsigned long int x = 4294967295;
    std::cout << "\nThe value of an unsigned long integer variable is: " << x;
}   
