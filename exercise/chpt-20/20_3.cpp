#include <iostream>

int muliplication(int x, int y){
    return x * y;
}
int main(void) {
    int a = 2, b =2, result;
    result = muliplication(a,b);
    std::cout<<a<<" x "<<b<<" = "<<result<<'\n';
}