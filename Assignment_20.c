#include <stdio.h>

// Swap using pointers (changes values in caller)
void swapWithPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Swap without pointers (only local changes, caller unaffected)
void swapWithoutPointer(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapWithoutPointer: a=%d, b=%d\n", a, b);
}

int main() {
    int x = 5, y = 10;

    printf("Original values: x=%d, y=%d\n", x, y);

    // Demonstrate swap without pointers
    swapWithoutPointer(x, y);
    printf("After swapWithoutPointer (caller unchanged): x=%d, y=%d\n", x, y);

    // Demonstrate swap with pointers
    swapWithPointer(&x, &y);
    printf("After swapWithPointer (caller changed): x=%d, y=%d\n", x, y);

    return 0;
}
