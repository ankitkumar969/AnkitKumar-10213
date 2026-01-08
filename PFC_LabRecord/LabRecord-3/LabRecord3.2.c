#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    scanf("%d", &n);

    // Add numbers from 1 to n
    for(int i = 1; i <= n; i++)
        sum += i;

    // Output the result
    printf("%d\n", sum);

    return 0;
}
