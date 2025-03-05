#include <stdio.h>

int main() {
    float num1, num2, result;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    if (num2 != 0) {
        result = num1 / num2;
        printf("The result of dividing %.2f by %.2f is %.2f.\n", num1, num2, result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}

