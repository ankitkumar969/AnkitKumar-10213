#include <stdio.h>

int main() {

    // Welcome message
    printf("Welcome to the Magical Escape Show \n\n");

    printf("\\t -> This line is tabbed!\n");     // Demonstrate \t Horizontal tab
    printf("\\n -> This text appears on a new line.\n");     // Demonstrate \n New line
    printf("\\\\ -> Prints a single backslash: \\\n");     // Demonstrate \\ - Backslash
    printf("\\\" -> Prints double quotes: \"Hello\"\n");     // Demonstrate \" Double quote
    printf("\\\'-> Prints single quotes: 'C'\n");     // Demonstrate \ Single quote
    printf("\\a -> You might hear a beep sound! \a\n");     // Demonstrate \a Alert/Beep
    printf("\\b -> Backspace in action: ABC \bD\n");     // Demonstrate \b Backspace
    printf("\\\r -> Carriage Return replaces line\rNow at start:\n");     // Demonstrate \r Carriage return
    printf("\\f -> Form feed moves to next page (not always visible)\n");     // Demonstrate \f Form feed
    printf("\\v -> Vertical tab below \vMagic Below!\n");     // Demonstrate \v Vertical tab
    printf("\\? -> Prints a question mark safely: \\?\n\n");     // Demonstrate ? Question mark
    
    printf("Thank you for watching the Escape Show! \n\n");

    return 0;
}   
