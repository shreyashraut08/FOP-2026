#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str1[50], str2[50];
    int i, n, isPalindrome = 1;

    printf("Enter first string: ");
    scanf("%49s", str1);   
    printf("Enter second string: ");
    scanf("%49s", str2);

    int length = strlen(str1); 
    printf("Length of first string: %d\n", length);

    printf("strcmp result: %d\n", strcmp(str1, str2));
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    char *myPtr = strstr(str1, "good");
    if (myPtr != NULL) {
        printf("Substring found: %s\n", myPtr);
    }

    n = length;
    for (i = 0; i < n / 2; i++) {
        if (str1[i] != str1[n - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    printf("%s is %s palindrome\n", str1, isPalindrome ? "a" : "not a");

    return 0;
}
