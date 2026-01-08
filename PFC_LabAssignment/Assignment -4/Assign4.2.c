#include <stdio.h>

// Function to reverse a number
int reverse(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

// Function to check palindrome
int isPalindrome(int num) {
    if (num == reverse(num))
        return 1;   // Palindrome
    else
        return 0;   // Not palindrome
}

int main() {
    int n;
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a palindrome\n", n);

    return 0;
}