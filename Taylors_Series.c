#include <stdio.h>

long long fact(int n) {
    long long f = 1;
    for(int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int i, n;
    float x, sum = 0.0f;
    int sign = 1;

    printf("Enter value of x: ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        int power = 2 * i - 1;  
        
        float term = 1.0f;
        for(int j = 1; j <= power; j++) {
            term *= x;
        }

        sum = sum + sign * (term / fact(power));

        sign = -sign;  
    }

    printf("Sum of series = %f\n", sum);

    return 0;
}
