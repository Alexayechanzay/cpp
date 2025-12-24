#include <iostream>

void myfunction(); // function declaration;
int main(){
    myfunction();
}

//function definition
void myfunction() {
    // void func does not need return statement
    std::cout<<"Hello world from a procedure!";
}