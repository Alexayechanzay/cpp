#include <iostream>
using namespace std;

// func overloading = same func name but different parameter types
void myprint(char par);
void myprint(int par);
void myprint(double par);

int main(void){
    myprint('A'); // calling char overload
    myprint(9);// calling integer overload
    myprint(3.14592659);// calling double overload
}

void myprint(char par){
    cout<<"character: "<< par<<'\n';
}
void myprint(int par){
    cout<<"integer: "<< par<<'\n';
}
void myprint(double par){
    cout<<"double: "<<par<<'\n';
}