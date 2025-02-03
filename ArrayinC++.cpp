#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n; 
    int arr[n]; 

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    
    cout << endl; // Output a newline at the end
    return 0;    
    
}