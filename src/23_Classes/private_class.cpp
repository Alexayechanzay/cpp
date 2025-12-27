#include <iostream>

struct Myclass{
        void printx(){
        std::cout<<"The value of x is: "<<x; //x is accessible to printx()
    }
private: 
    int x = 0;// private access

    /*private access members 
    are accessible only to other class members,
    not objects*/
};

int main(){
    Myclass o; // create an object
    // o.x = 123;//not accessible from object c
    o. printx();// accessible from object o
}