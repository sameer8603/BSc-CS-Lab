#include <stdio.h>
#include <math.h>  // for M_PI and sqrt()

int main() {
    int choice;
    float length, breadth, radius, side, a, b, c;

    printf("Choose a shape:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("4. Cube\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Rectangle
            printf("Enter length and breadth: ");
            scanf("%f %f", &length, &breadth);
            printf("Area of Rectangle = %.2f\n", length * breadth);
            printf("Perimeter of Rectangle = %.2f\n", 2 * (length + breadth));
            break;

        case 2: // Circle
            printf("Enter radius: ");
            scanf("%f", &radius);
            printf("Area of Circle = %.2f\n", M_PI * radius * radius);
            printf("Perimeter (Circumference) of Circle = %.2f\n", 2 * M_PI * radius);
            break;

        case 3: // Triangle
            printf("Enter three sides of the triangle (a b c): ");
            scanf("%f %f %f", &a, &b, &c);

            if (a + b > c && a + c > b && b + c > a) { // Valid triangle check
                float s = (a + b + c) / 2; // semi-perimeter
                float area = sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
                printf("Area of Triangle = %.2f\n", area);
                printf("Perimeter of Triangle = %.2f\n", a + b + c);
            } else {
                printf("Invalid triangle sides!\n");
            }
            break;

        case 4: // Cube
            printf("Enter side length: ");
            scanf("%f", &side);
            printf("Surface Area of Cube = %.2f\n", 6 * side * side);
            printf("Perimeter (sum of all edges) of Cube = %.2f\n", 12 * side);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
