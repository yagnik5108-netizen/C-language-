#include <stdio.h>
int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Sum = %.2f\n", a + b);
    printf("Difference = %.2f\n", a - b);
    printf("Product = %.2f\n", a * b);
    if (b == 0) printf("Quotient = undefined\n");
    else printf("Quotient = %.2f\n", a / b);
    return 0;
}
