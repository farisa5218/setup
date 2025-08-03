#include <stdio.h>
#include <math.h>

int main() {
    int X;
    double P;
    scanf("%d %lf", &X, &P);

    // Calculate the original price before the discount.
    double original_price = P / (1 - X / 100.0);

    // Round the result to two decimal places.
    original_price = round(original_price * 100) / 100;

    printf("%.2lf\n", original_price);

    return 0;
}
