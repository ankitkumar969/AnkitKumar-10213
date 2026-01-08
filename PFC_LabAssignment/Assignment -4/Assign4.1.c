#include <stdio.h>

// Function to reverse a number
int reverse(int num) {
    int rev = 0;

    while (num != 0) {
        int digit = num % 10;     // Get last digit
        rev = rev * 10 + digit;   // Add digit to reversed number
        num /= 10;                // Remove last digit
    }

    return rev;   // Return reversed number
}

int main() {
    int n;
    scanf("%d", &n);  // Input number

    int result = reverse(n);
    printf("%d\n", result);  // Print reversed number
    
    return 0;

}