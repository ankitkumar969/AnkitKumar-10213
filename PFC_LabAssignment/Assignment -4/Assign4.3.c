#include <stdio.h>

// Function to find factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    scanf("%d", &n);

    long long result = factorial(n);
    printf("%lld\n", result);

    return 0;
}
