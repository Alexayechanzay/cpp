#include <iostream>

class Myclass{
    // Data members
    char c;
    int x;
    double d;

    // member function 
    /* two ways to define the function 
    1.inside the class
    2.outside the class (using scope resolution :: optr) */
    void dosomething();

    //1
    /*     void dosomething() {
        std::cout<<"Hello World from a class";
    }*/

}; // Don't forget semicolon ;


    // 2. type class_name::func_name(par){code}
    void Myclass::dosomething(){
        std::cout<<"Hello world from a class";
    }


int main(void){
    return 0;
}