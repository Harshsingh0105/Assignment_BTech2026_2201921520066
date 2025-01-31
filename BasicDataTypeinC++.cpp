#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    // Taking input
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    // displaying output
    printf("%d\n", i);            // Print int
    printf("%ld\n", l);           // Print long
    printf("%c\n", c);            // Print char
    printf("%.3f\n", f);          // Print float with 3 decimal places
    printf("%.9lf\n", d);         // Print double with 9 decimal places

 
    return 0;
}