#include <string.h>
#include <ctype.h>
#include "palindrome.h"

int is_palindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    if (right < 0) return 1;

    while (left < right) {
        if (tolower((unsigned char)str[left]) != tolower((unsigned char)str[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 0; // Навмисний баг для перевірки тестів
}
