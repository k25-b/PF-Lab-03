#include <stdio.h>

int main() {
    double number;

    printf("Enter a precise decimal number: ");
    scanf("%lf", &number);

    printf("\n--- Precision Output ---\n");  
  
    printf("Default: %lf\n", number);
    
    printf("2 Decimals: %.2lf\n", number);
    
    printf("5 Decimals: %.5lf\n", number);

    return 0;
}
