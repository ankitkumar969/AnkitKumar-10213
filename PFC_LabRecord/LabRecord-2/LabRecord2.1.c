#include <stdio.h>

int main() {

    int studentId;
    float temperature;
    double bankBalance;
    char grade;

    printf("--- Data Type Demonstration ---\n");

    printf("Enter your student ID (an integer): ");
    scanf("%d", &studentId);

    printf("Enter the current temperature (a decimal): ");
    scanf("%f", &temperature);

    printf("Enter your bank balance (a precise decimal): ");
    scanf("%lf", &bankBalance);

    printf("Enter your final grade (a single character): ");
    scanf(" %c", &grade);

    printf("\n--- You Entered the Following Data ---\n");
    printf("Student ID: %d\n", studentId); 
    printf("Temperature: %.2f\n", temperature);
    printf("Bank Balance: %.2lf\n", bankBalance);
    printf("Final Grade: %c\n", grade);
    printf("----------------------------------------\n\n");

    int num1, num2, temp;

    printf("--- Number Swapping Demonstration ---\n");
    printf("Enter the first number to swap: ");
    scanf("%d", &num1);

    printf("Enter the second number to swap: ");
    scanf("%d", &num2);

    printf("\nBefore swapping: \n");
    printf("First number  = %d\n", num1);
    printf("Second number = %d\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping: \n");
    printf("First number  = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}