#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sum(int a, int b, int c){
    
    return a+b+c;
}


int main() {
    int x, y, z;
    cin>>x>>y>>z;
    
    cout<<sum(x, y, z);
    return 0;
}