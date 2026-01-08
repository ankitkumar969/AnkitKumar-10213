#include <stdio.h>
int main() {

//Sum of 2 numbers
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum is: %d\n", sum);
    printf("------------------------------------\n"); 
    // Adding a separator for clarity

//Largest of 2 numbers
    if (num1 > num2) {
        printf("%d is the largest number.\n", num1);
    } 
    else {
        printf("%d is the largest number.\n", num2);
    }

    printf("------------------------------------\n"); 
    // Adding a separator for clarity    

//5 VS Code Shortcuts
    printf("1. Toggle Line Comment: Ctrl + / \n");
    printf("2. Toggle Sidebar: Ctrl + B \n");
    printf("3. Save File: Ctrl + S \n");
    printf("4. Split Editor: Ctrl + backslash \n");
    printf("5. Find: Ctrl + F \n");

    return 0;
}
