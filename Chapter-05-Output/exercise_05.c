
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Chapter 5 Exercise 5: Display results to 2 decimal places

    double radius = 5.0;

    // Calculate sphere volume and surface area
    double volume = (4.0 / 3.0) * M_PI * radius * radius * radius;
    double surfaceArea = 4.0 * M_PI * radius * radius;

    // Display the results to 2 decimal places
    printf("Radius: %.2f\n", radius);
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
