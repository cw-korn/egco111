#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;  
    float discriminant, root1, root2;

    printf("Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check if roots are real or imaginary
    //this one means that they are 2 answers
    if (discriminant > 0) {
        //this one means that they are 2 answers
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        //this one means that they are only 1 answer
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same: %.2f\n", root1);
    } else {
        //this one means that the answers are in imaginary
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
