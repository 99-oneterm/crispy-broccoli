#include <stdio.h>
#include <math.h>

int Main() {
    double number;

    printf("Enter a number to find its square root: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Cannot calculate square root of a negative number.\n");
    } else {
        double result = sqrt(number);
        printf("Square root of %.2lf is %.5lf\n", number, result);
    }

    return 0;
}
