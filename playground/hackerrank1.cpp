#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> result;
    stringstream ss{str};// This converts the string to a stream
    int x; char c;
 
    while (ss >> x)// to extract integers only
    {
        result.push_back(x);
        ss >> c;//to discard the character
    }

    
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

/*sample input: 23,4,56
sample output: 
23
4
56
*/
