
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Chapter 5 Exercise 4: Sphere calculations

    // Declare and initialise the radius
    double radius = 5.0;

    // Calculate the volume and surface area
    double volume = (4.0 / 3.0) * M_PI * radius * radius * radius;
    double surfaceArea = 4.0 * M_PI * radius * radius;

    // Display the results
    printf("Radius: %f\n", radius);
    printf("Volume: %f\n", volume);
    printf("Surface Area: %f\n", surfaceArea);

    return 0;
}
