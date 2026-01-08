#include <stdio.h>

void addPrint(int a, int b) {
    printf("%d", a + b);   // prints result but cannot return it
}

int main() {
    addPrint(3, 4);

    return 0;
}
