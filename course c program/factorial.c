#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    // Get user input for the number
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check if the number is non-negative
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

        // Display the result
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
