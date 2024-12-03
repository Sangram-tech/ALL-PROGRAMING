#include <stdio.h>
int square(int n);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The square of %d is %d\n", num, square(num));

    return 0;
}
int square(int n) {
    return n * n;
}