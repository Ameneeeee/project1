#include <stdio.h>

int main() {
    float celsius, kelvin;

    // Input Celsius temperature from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Kelvin
    kelvin = celsius + 273.15;

    // Display the result
    printf("Temperature in Kelvin: %.2f K\n", kelvin);

    return 0;
}
