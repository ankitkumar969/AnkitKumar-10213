#include <stdio.h>

int main() {
    // Loop from 1 to 10
    for(int i = 1; i <= 10; i++) {

        // Skip printing when i = 5
        if(i == 5)
            continue;

        // Stop the loop completely when i = 9
        if(i == 9)
            break;

        printf("%d\n", i);
    }

    return 0;
}
