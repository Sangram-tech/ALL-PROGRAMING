
#include <stdio.h>

// Global variable (extern storage class by default)
int global_var = 10;

// Function to demonstrate auto storage class
void autoStorageClass() {
    // Local variable (auto storage class by default)
    int auto_var = 20;
    printf("Auto variable: %d\n", auto_var);
}

// Function to demonstrate register storage class
void registerStorageClass() {
    // Register variable (hint to store in CPU register)
    register int reg_var = 30;
    printf("Register variable: %d\n", reg_var);
}

// Function to demonstrate static storage class
void staticStorageClass() {
    // Static variable (preserves value between function calls)
    static int static_var = 40;
    printf("Static variable: %d\n", static_var);
    static_var++;
}

// Function to demonstrate extern storage class
void externStorageClass() {
    // Accessing global variable
    printf("Extern variable (global): %d\n", global_var);
}

int main() {
    printf("Storage Classes in C:\n");

    autoStorageClass();
    registerStorageClass();

    printf("Static storage class - First Call:\n");
    staticStorageClass();

    printf("Static storage class - Second Call:\n");
    staticStorageClass();

    externStorageClass();

    return 0;
}
