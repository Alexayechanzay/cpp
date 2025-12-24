#include <iostream>
#include <string>
/*passed by const ref is gold rule
Speed; Fast (just like by ref, no copy is created)
Safety: Const ensures that alias is read-only */
void myfunc(const std::string& x);

int main(void){
    std::string s = "Hello Cuda?";
    myfunc(s);
}

void myfunc(const std::string& x){
    std::cout<<"Arguments passed by const reference: "<<x;
}