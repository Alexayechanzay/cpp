#include <iostream>

int main(void){
    bool myCondition = true;
    int x =0;

    // intented program
    /* if (myCondition) x = 1;
    else x = 2;
    std::cout<< "The value of x is: "<<x<<'\n';*/

    //conditional expression using unary ? operator
    // (condition) ? expression_1 : expression_2
    x = (myCondition) ? 1:0;
    std::cout<< "The value of x is: "<<x<<'\n';

}