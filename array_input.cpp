#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n=0;

    cin>>n;
    int arr[n] = {};
    // taking inputs for array using loop
    for (int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    // Reversing the order
    for (int i=n-1;i>=0;i--){
        cout<<arr[i];
    }

    
}
/*In C++, the name of an array 
acts as a pointer to 
its first element.*/
    