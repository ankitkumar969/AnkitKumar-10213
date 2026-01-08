#include <stdio.h>
int main() {

    int P, N;
    float D;

    // Read input values
    scanf("%d %d %f", &P, &N, &D);

    // Calculate total after discount
    float total = (P * N) * (1 - D/100);
    
    // Print the formatted invoice
    printf("*** DIWALI FIREWORKS ***\n");
    printf("Item Price: \t%d rupees\n", P);
    printf("Quantity: \t%d\n", N);
    printf("Discount: \t%0.2f%%\n", D);
    printf("Total: \t\t%0.2f rupees\n\a", total);
    printf("\a");

    // Print student information
    printf("\n");

    return 0;
}
