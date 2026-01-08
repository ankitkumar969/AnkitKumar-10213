#include <stdio.h> //This is a "preprocessor directive". It includes the standard input/output functions library.

int main() //The main function where program execution begins.
{   //Curly braces define a code block.

    // This is the first C program
    printf("Hello, World!\n"); //Prints formatted text to the screen.

    printf("------------------------------------\n"); // Adding a separator for clarity


    // Print name/age using printf statement
    
    char name[20] = "Ankit Kumar";     // Declare a char variable to hold name
    int age = 19;     // Declare an integer variable to hold an age

    printf("My name is %s and I am %d years old.\n", name, age); 
    // %s is a format specifier for string
    // %d is a format specifier for integers

    return 0; //Ends the function, indicating successful execution.
}



