#include <stdio.h>

int main() {
    int choice;
    double temperature;

    // Display menu
    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Prompt user for temperature
    printf("Enter the temperature: ");
    scanf("%lf", &temperature);

    // Perform conversion based on user's choice
    if (choice == 1) {
        // Celsius to Fahrenheit
        double fahrenheit = (temperature * 9 / 5) + 32;
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, fahrenheit);
    } else if (choice == 2) {
        // Fahrenheit to Celsius
        double celsius = (temperature - 32) * 5 / 9;
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, celsius);
    } else {
        // Invalid choice
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
