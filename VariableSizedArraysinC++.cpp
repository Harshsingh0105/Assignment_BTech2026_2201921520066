#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    
    // Declaring a vector of vectors to store the variable-length arrays
    vector<vector<int>> arrays(n);

    // Reading each array and store them
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;  // the number of elements in the current array
        arrays[i].resize(k);  // resize the array to store 'k' elements
        for (int j = 0; j < k; ++j) {
            cin >> arrays[i][j];  // filling the array with elements
        }
    }

    // Process each query
    for (int i = 0; i < q; ++i) {
        int x, y;
        cin >> x >> y;  // query indices
        cout << arrays[x][y] << endl;  // printing the element at arrays[x][y]
    }   
    return 0;
}