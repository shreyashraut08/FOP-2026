#include <stdio.h>
#include <stdlib.h>  // for abs()

int main() {
    int num1, num2, scd = -1;  // initialize scd
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    num1 = abs(num1);
    num2 = abs(num2);

    for (int i = 2; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            scd = i;
            break;  // smallest common divisor found
        }
    }

    if (scd == -1) {
        printf("No common divisor found\n");
    } else {
        printf("SCD of %d and %d is: %d\n", num1, num2, scd);
    }

    return 0;
}
