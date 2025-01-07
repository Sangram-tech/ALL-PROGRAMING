#include <stdio.h>

int main() {
    int value = 42;
    int *ptr = &value;
    int **double_ptr = &ptr;

    printf("Address of value: %p\n", (void*)&value);
    printf("Address of ptr: %p\n", (void*)&ptr);
    printf("Address of double_ptr: %p\n", (void*)&double_ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    printf("Value pointed to by double_ptr: %d\n", **double_ptr);

    return 0;
}
