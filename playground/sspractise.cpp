#include <iostream>
#include <sstream>

int main(void) {
    std::string date = "2025:12:25";
    //initialization
    int year,month,dd;
    char c;
    // convert to stringstream
    std::stringstream ss(date);
    //std::cout<<ss.str();// .str(): to get the content of ss obj
    ss >> year >> c >> month >> c >> dd;
    std::cout<<"Year: "<<year<<" Month: "<<month<<" Date: "<<dd<<'\n';
}