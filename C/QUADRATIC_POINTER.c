#include <stdio.h>
#include <math.h>
void calculateRoots(double a, double b, double c, double* root1, double* root2, double* realPart, double* imaginaryPart) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        *root1 = (-b + sqrt(discriminant)) / (2 * a);
        *root2 = (-b - sqrt(discriminant)) / (2 * a);
        *realPart = 0;
        *imaginaryPart = 0;
    } else if (discriminant == 0) {
        *root1 = *root2 = -b / (2 * a);
        *realPart = 0;
        *imaginaryPart = 0;
    } else {
        *realPart = -b / (2 * a);
        *imaginaryPart = sqrt(-discriminant) / (2 * a);
        *root1 = *root2 = 0;
    }
}
int main() {
    double a, b, c, root1, root2, realPart, imaginaryPart;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    calculateRoots(a, b, c, &root1, &root2, &realPart, &imaginaryPart);
    if (imaginaryPart == 0) {
        if (root1 == root2) {
            printf("Roots are real and same.\n");
            printf("Root 1 = Root 2 = %.2lf\n", root1);
        } else {
            printf("Roots are real and different.\n");
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
        }
    } else {
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
    return 0;
}
