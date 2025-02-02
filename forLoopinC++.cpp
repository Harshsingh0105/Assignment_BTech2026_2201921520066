#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    // Array of English words for numbers 1-9
    string numWords[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    // for Loop
    for (int i = start; i <= end; i++) {
        if (i >= 1 && i <= 9) {
            cout << numWords[i - 1] << endl;
        } else if (i % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }
    return 0;
}