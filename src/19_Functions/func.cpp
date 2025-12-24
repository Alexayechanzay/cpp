#include <iostream>

int mySquare(int x);

int main(void){
    int x=0;
    std::cout<<"Please enter a number: ";
    std::cin>>x;
    auto sqrNo = mySquare(x);
    std::cout<<sqrNo;
}

int mySquare(int x){
    return x*x;
}