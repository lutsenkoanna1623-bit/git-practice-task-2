#include <stdio.h>
#include <string.h>
#include <ctype.h> // Додано для функції tolower()

int is_palindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    
    // Перевірка на порожній рядок
    if (right < 0) return 1; 

    while (left < right) {
        // Виправляємо логічну помилку: приводимо до нижнього регістру перед порівнянням
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Не паліндром
        }
        left++;
        right--;
    }
    return 1; // Паліндром
}

int main() {
    // Додаємо кілька тестових рядків згідно з вимогою
    char test1[] = "Level";
    char test2[] = "Hello";
    char test3[] = "";

    // Виводимо результати у консоль
    printf("\"%s\" - %s\n", test1, is_palindrome(test1) ? "паліндром" : "не паліндром");
    printf("\"%s\" - %s\n", test2, is_palindrome(test2) ? "паліндром" : "не паліндром");
    printf("\"%s\" - %s\n", test3, is_palindrome(test3) ? "паліндром" : "не паліндром");

    return 0;
}