#include <string.h>
#include <ctype.h>
#include "./palindrome.h"

int is_palindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    if (right < 0) return 1;

    while (left < right) {
        int l = tolower((unsigned char)str[left]);
        int r = tolower((unsigned char)str[right]);
        if (l != r) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
