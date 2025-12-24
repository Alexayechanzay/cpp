#include <iostream>
using namespace std;

int myfunc(int x);
int main(void) {
    int y=0;
    cout<<"Enter 0 or 1: ";
    cin>>y;

    cout<<"Function returns "<<myfunc(y)<<'\n';
}

int myfunc(int a){
    if (a == 0){
        return 100;
    }
    else {
        return 10000;
    }
}