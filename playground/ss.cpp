#include <iostream>
#include <sstream>> 
//concatanating diff data types into one string

int main(){
    std::stringstream ss;
    ss << "Alex is " << 18 << " years old.";
    std::string text = ss.str(); //Gets the contents of underlying string 
    std::cout<<"Text says: "<<text<<'\n';
    
}