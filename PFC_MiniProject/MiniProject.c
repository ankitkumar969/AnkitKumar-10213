#include <stdio.h>

int main() {
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Repeat until a single digit remains
    while (num > 9) {
        sum = 0;

        // Extract digits and sum them
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        num = sum;  // assign the sum back to num
    }

    printf("Digital Root: %d\n", num);

    return 0;
}
