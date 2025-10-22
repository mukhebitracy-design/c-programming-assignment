/*
name :Tracy Nekesa
reg:PA106/G/28737/25
*/

#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float toCelsius(float fahrenheit) {
    float celsius = (5.0 / 9.0) * (fahrenheit - 32);
    return celsius;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    float c = toCelsius(f);
    printf("Temperature in Celsius: %.2f\n", c);

    return 0;
}
