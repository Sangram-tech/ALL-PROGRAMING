#include <stdio.h>
void reverseNumber(int *num) {
    int reversed = 0;
    while (*num != 0) {
        reversed = reversed * 10 + (*num % 10);
        *num /= 10;
    }
    *num = reversed;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    reverseNumber(&number);
    
    printf("Reversed number: %d\n", number);
    
    return 0;
}
