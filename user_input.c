#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (e.g., 5.9): ");
    scanf("%f", &height);

    printf("Enter your grade (A/B/C): ");
    scanf(" %c", &grade);

    printf("\n--- You Entered ---\n");
    printf("Age: %d\n", age);
    printf("Height: %f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
