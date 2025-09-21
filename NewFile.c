/*
name:Tracy Nekesa 
reg:PA106/G/28737/25
Description: calculation of volume and surface area */

#include <stdio.h>
#define PI 3.142

int main() {
    float radius, height, volume, surfaceArea;

    // Prompt user
    printf("enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("enter the height of the cylinder: ");
    scanf("%f", &height);

    // Formulas
    volume = PI * radius * radius * height; // V = pr²h
    surfaceArea = 2 * PI * radius * (radius + height); // A = 2pr(r + h)

    // Output
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}