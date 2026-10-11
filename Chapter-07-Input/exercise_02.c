
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Chapter 7 Exercise 2: Sphere calculator using scanf

    double radius;
    double volume;
    double surfaceArea;

    // Request radius from user
    printf("Enter the radius of the sphere: ");

    // Read radius
    if (scanf("%lf", &radius) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Validate radius
    if (radius <= 0.0)
    {
        printf("Radius must be positive.\n");
        return 1;
    }

    // Calculate volume and surface area
    volume = (4.0 / 3.0) * M_PI * radius * radius * radius;
    surfaceArea = 4.0 * M_PI * radius * radius;

    // Display results
    printf("Radius: %.2f\n", radius);
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
