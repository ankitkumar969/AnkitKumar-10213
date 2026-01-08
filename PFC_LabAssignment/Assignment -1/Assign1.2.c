#include <stdio.h>

int main() {
    char ch;
    int days;
    float rate;

    // Read input values
    scanf("%c %d %f", &ch, &days, &rate);

    // Calculate total fine
    float fine = days * rate;

    // Print the formatted receipt
    printf("Library Receipt\v");
    printf("\n");
    printf("Member Initial: %c\v", ch);
    printf("Days: \t\t%05d\v", days);
    printf("Fine: \t\t%.2f INR\v", fine);

    printf("\n");

    return 0;
}
