#include <stdio.h>

int main() {
    int num, n1, n2, n3;
    char op;
    double d1, d2;

    // 1. Odd/Even check using if-else
    printf("Enter an integer for Odd/Even check:");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is EVEN.\n", num);
    } 
    else {
        printf("%d is ODD.\n", num);
    }

    // 2. Ternary operator (also for Odd/Even)
    printf("Ternary check: %d is %s.\n", num, (num % 2 == 0) ? "EVEN" : "ODD");

    // 3. Max of three numbers (nested if)
    printf("\nEnter three integers to find the max:");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 >= n2) {
        if (n1 >= n3) {
            printf("Max is %d.\n", n1);
        }
        else {
            printf("Max is %d.\n", n3);
        }
    } 
    else {
        if (n2 >= n3){
            printf("Max is %d.\n", n2);
        }
        else {
            printf("Max is %d.\n", n3);
        }
    }

    // 4. Switch-case calculator
    printf("\nEnter operator (+,-,*,/) and two numbers:");

    scanf(" %c %lf %lf", &op, &d1, &d2); 
    switch (op) {
        case '+': printf("Result: %.2lf\n", d1 + d2); break;
        case '-': printf("Result: %.2lf\n", d1 - d2); break;
        case '*': printf("Result: %.2lf\n", d1 * d2); break;
        case '/':
            if (d2 == 0){
                printf("Error: Division by zero.\n");
            }
            else {
                printf("Result: %.2lf\n", d1 / d2);
            }
            break;
        default: printf("Error: Invalid operator.\n"); break;
    }

    return 0;
}
