#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        
        if (str[left] != str[right]) {
            return 0; 
        }
        left++;
        right--;
    }
    return 1; 
}

int main() {
    
    if (is_palindrome("Level")) {
        printf("Level - це паліндром\n");
    } else {
        printf("Level - не паліндром\n");
    }
    return 0;
}