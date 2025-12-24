#include <iostream>
using namespace std;

int main(void) {
    int bit = 256;
    if (bit > 100 && bit << 300){
        cout<<"Bit lies between 100 and 300\n";
    }
    else {
        cout<<"Bit doesn't satisfy the condition\n";
    }

    bool myCond=true;
    if (bit > 100 || myCond){
        cout<<"Condtion is ture\n";
    }
    else {
        cout<<"Conditin is false\n";
   }
   bool myCond2 = !myCond;
   cout<<"myCond's value: "<<myCond<<'\n';
   cout<<"myCond2's value: "<<myCond2<<'\n';
}