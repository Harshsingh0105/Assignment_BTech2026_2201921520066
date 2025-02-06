#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    vector<int> result;
    int num;
    char ch; // To discard commas
    
    while (ss >> num) {
        result.push_back(num);
        ss >> ch; // To read and discard the comma
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