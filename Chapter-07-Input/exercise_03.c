
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Chapter 7 Exercise 3: Cylinder surface area

    double radius;
    double height;
    double surfaceArea;

    // Request the radius
    printf("Enter the cylinder radius: ");

    if (scanf("%lf", &radius) != 1)
    {
        printf("Invalid radius input.\n");
        return 1;
    }

    // Request the height
    printf("Enter the cylinder height: ");

    if (scanf("%lf", &height) != 1)
    {
        printf("Invalid height input.\n");
        return 1;
    }

    // Check that dimensions are positive
    if (radius <= 0.0 || height <= 0.0)
    {
        printf("Radius and height must be positive.\n");
        return 1;
    }

    // Calculate the total surface area
    surfaceArea = 2.0 * M_PI * radius * radius
                + 2.0 * M_PI * radius * height;

    // Display the answer to three decimal places
    printf("Cylinder surface area: %.3f\n", surfaceArea);

    return 0;
}
