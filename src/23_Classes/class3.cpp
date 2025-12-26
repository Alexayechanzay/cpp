#include <iostream>

class Myclass{
    //declaration 
    void dosomething();
    void dosomethingelse();
};
//definition

void Myclass::dosomething(){
    std::cout<<"Hello World from a class.";
}
void Myclass::dosomethingelse(){
    std::cout<<"Hello Universe from a class.";
}


/*

#include <iostream>

class Myclass {
    int x = 10;
    void printx(){
        std::cout<<"The value of x is: "<<x;
    }
};
*/