#include <stdio.h>

int main() {
    float a, b, c, temp;

    // Input three sides
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // First, sort so that 'a' is the largest side
    if (b > a && b > c) {
        temp = a; a = b; b = temp;
    }
    else if (c > a && c > b) {
        temp = a; a = c; c = temp;
    }

    // Check for validity of triangle
    if (a >= b + c) {
        printf("Not a triangle (a > b + c).\n");
    }
    else {
        float a2 = a * a;
        float b2c2 = b * b + c * c;

        if (a2 == b2c2) {
            printf("Right-angled triangle.\n");
        }
        else if (a2 > b2c2) {
            printf("Obtuse-angled triangle.\n");
        }
        else {
            printf("Acute-angled triangle.\n");
        }
    }

    return 0;
}
