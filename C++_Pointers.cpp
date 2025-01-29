#include<iostream>
#include<cstdlib>

void update(int *a,int *b) {
    int temp_a = *a;
    *a = *a + *b;   // Sum of a and b
    *b = abs(temp_a - *b);  // Absolute difference between original a and b

    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}