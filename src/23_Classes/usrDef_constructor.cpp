#include <iostream>
class Myclass {
public:
    int x, y;
    Myclass(int a,int b) 
    :x{a}, y{b} //Member Initializer List
    {
        //some code
    }
};

int main(void){
    Myclass o{1,2};//invoke a user-provided constructor
    std::cout<< "User-provided constructor invoked." <<'\n';
    std::cout<<o.x<<' '<<o.y;
}