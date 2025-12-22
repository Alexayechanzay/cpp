#include <iostream>
using namespace std;

int main(void){
    int x = 123; 
    int& y = x; // ref(aka: alias) is created by type_name&
    x = 456;
    cout<<y<<'\n';
    y = 789;
    cout<<x<<'\n';
}