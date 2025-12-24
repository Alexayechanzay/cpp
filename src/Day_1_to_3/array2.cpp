#include <iostream>
using namespace std;

int main(void){
    // initialization using initialization list

    /*we don't need to give a place for special char 
    like in arry.cpp since values are passed into using init list*/
    int arr[5] = {10,20,30,40,50}; 
    cout<<arr[0];
    
    arr[0] = 100; // change the value of first element to 100
    cout<<arr[0];
    cout<<"----------------------\n";
    for (int i=0;i<5;i++){
        cout<<arr[i]<<'\n';
    }
    cout<<'\n';
}