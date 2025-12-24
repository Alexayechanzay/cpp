#include <iostream>
using namespace std;

int main(void) {
    int num = 3;
    switch (num)
    {
    case 1:
        cout<<"Value of num is 1\n";
        break;
    case 2:
        cout<<"Value of num is 2\n";
        break;
    case 3:
        cout<<"Value of num is 3\n";
        break;
    case 4:
        cout<<"Value of num is 4\n";
        break;
    default:
        cout<<"value is out or range[1 to 4]";
        break;
    }
}