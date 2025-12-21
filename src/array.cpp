#include <iostream>

int main(void) {
    char list[6]; // N + 1, N characters expected
    std::cout<<"Enter five characters: ";
    std::cin>>list;
    std::cout<<"five characters are ";

    for (int i=0;i<5;i++){
        std::cout<<list[i];
    }
    std::cout<<'\n';
}