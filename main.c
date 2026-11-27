#include <stdio.h>
#include "palindrome.h"

int main() {
    char test1[] = "Level";
    char test2[] = "Hello";
    char test3[] = "";

    printf("\"%s\" - %s\n", test1, is_palindrome(test1) ? "паліндром" : "не паліндром");
    printf("\"%s\" - %s\n", test2, is_palindrome(test2) ? "паліндром" : "не паліндром");
    printf("\"%s\" - %s\n", test3, is_palindrome(test3) ? "паліндром" : "не паліндром");

    return 0;
}
