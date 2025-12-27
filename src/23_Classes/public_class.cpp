#include <iostream>

class Myclass{
    public:
    int x;
    void printx(){
        std::cout<<"The value of data member x is: "<<x;
    }
};

int main(void) {
    Myclass o;
    // o is accessible to all member fileds
    o.x = 123;
    o.printx();
}