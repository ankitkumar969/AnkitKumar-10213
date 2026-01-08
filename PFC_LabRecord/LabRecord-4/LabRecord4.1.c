#include <stdio.h>

int square(int n) {    
    return n * n;   // returns the square
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d", square(x));

    return 0;
}
