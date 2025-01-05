#include <stdio.h>
void factorial(int n, int *result) {
    *result = 1;
    for (int i = 1; i <= n; i++) {
        *result *= i;
    }
}

int main() {
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    factorial(number, &result);
    printf("Factorial of %d is %d\n", number, result);
    
    return 0;
}
