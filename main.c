#include <stdio.h>
#include "./palindrome.h"

static void print_result(char str[]) {
    printf("\"%s\" - %s\n", str,
           is_palindrome(str) ? "паліндром" : "не паліндром");
}

int main() {
    char test1[] = "Level";
    char test2[] = "Hello";
    char test3[] = "";

    print_result(test1);
    print_result(test2);
    print_result(test3);

    return 0;
}
