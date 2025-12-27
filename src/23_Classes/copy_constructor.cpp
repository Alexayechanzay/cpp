#include <iostream>

class Myclass{
private:
    int x, y;
public:
    Myclass(int a, int b): x{a},y{b}{}
    // user-def copy constructor
    Myclass(const Myclass& rhs) : x{rhs.x}, y{rhs.y} 
    //init members with other obj's memebr
    {
        std::cout<<"User defined copy constructor invoked";
    }
};

int main(void){
    Myclass o1{1,2};
    Myclass o2 = o1; //usr-def copy construcotr invoked
}