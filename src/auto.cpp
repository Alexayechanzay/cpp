#include <iostream>
#include <string>

int main(void){
    auto c = 'a';
    auto ans =  12.3 / 34.5; // deduce based on expression
    std::cout<<sizeof(ans)<<'\n'<<ans;
}