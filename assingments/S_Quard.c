#include <stdio.h>
#include <math.h> // Required for sqrt() function

int main() {
    float a, b, c;
    float discriminant, root1, root2, imaginary;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = (b * b) - (4 * a * c);

    // Switch based on the nature of the discriminant
    switch (discriminant > 0) {
        case 1:
            // Two distinct real roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
            break;
        case 0:
            switch (discriminant < 0) {
                case 1:
                    // Two complex roots
                    root1 = root2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);
                    printf("Roots are complex and different.\n");
                    printf("Root 1 = %.2f + %.2fi\n", root1, imaginary);
                    printf("Root 2 = %.2f - %.2fi\n", root1, imaginary);
                    break;
                case 0:
                    // One real root
                    root1 = root2 = -b / (2 * a);
                    printf("Roots are real and the same.\n");
                    printf("Root 1 = Root 2 = %.2f\n", root1);
                    break;
            }
            break;
    }

    return 0;
}
