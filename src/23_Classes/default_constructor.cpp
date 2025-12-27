#include <iostream>

class Myclass{
public:
    Myclass(int x=123, int y=456){
        std::cout<<"Default constructor invoked."<<'\n';
    }
};

int main(void) { 
    Myclass o;//invoke a default constructor.
}