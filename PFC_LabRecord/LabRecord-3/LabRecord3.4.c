#include <stdio.h>

int main() {
    // Loop for each row
    for(int i = 1; i <= 5; i++) {

        // Print numbers from 1 to i
        for(int j = 1; j <= i; j++)
            printf("%d", j);

        printf("\n");
    }

    return 0;
}
