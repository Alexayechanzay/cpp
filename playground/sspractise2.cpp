#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::string data = "10 20 30 40 50";
    std::stringstream ss(data);
    std::vector<int> numbers;
    int n; char c;
    int sum = 0;

    // TODO: Write a loop to extract all numbers into the vector
    while (ss >> n)
    {
        // >> operator naturally skips spaces, tabs, and newlines
        numbers.push_back(n);
        sum += n;
    }
    
    // TODO: Calculate the sum of the vector


    std::cout<<"Sum: "<<sum<<'\n';
}