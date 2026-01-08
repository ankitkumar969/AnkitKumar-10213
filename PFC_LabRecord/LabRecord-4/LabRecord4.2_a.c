#include <stdio.h>

int add(int a, int b) {
    return a + b;   // sends result back
}

int main() {
    int result = add(3, 4);
    printf("%d", result);

    return 0;
}
