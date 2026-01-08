#include <stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    
    if (n <= 1){
        printf("The given number is Non-Prime\n");
        return 0;
    }
    
    if (n == 2){
        printf("The given number is Prime\n");
        return 0;
    }
    
    if (n % 2 == 0){
        printf("The given number is Non-Prime\n");
        return 0;
    }
    
    for (int i=3; i*i <= n; i += 2){
        if (n%i == 0){
            printf("The given number is Non-Prime\n");
            return 0;
        }
    }
    
    printf("The given number is Prime\n");

    return 0;
    
}
