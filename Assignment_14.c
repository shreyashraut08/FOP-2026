#include <stdio.h>

int main() {
    int binary, decimal = 0, i = 0, rem;
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {
        rem = binary % 10;
        if (rem != 0 && rem != 1) {   // check for invalid binary digit
            printf("Invalid binary number!\n");
            return 1;
        }
        decimal += rem * (1 << i);    // use bit shift instead of pow
        binary /= 10;
        i++;
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
