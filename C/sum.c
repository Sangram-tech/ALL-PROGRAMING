#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = add(num1, num2);
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
int add(int a, int b) {
    return a + b;
}
