#include <stdio.h>
#include <assert.h>
#include "./palindrome.h"

void test_basic_palindromes() {
    char s1[] = "level";
    char s2[] = "noon";
    char s3[] = "madam";
    assert(is_palindrome(s1) == 1);
    assert(is_palindrome(s2) == 1);
    assert(is_palindrome(s3) == 1);
}

void test_case_insensitivity() {
    char s1[] = "Level";
    char s2[] = "RaCeCaR";
    char s3[] = "AbBa";
    assert(is_palindrome(s1) == 1);
    assert(is_palindrome(s2) == 1);
    assert(is_palindrome(s3) == 1);
}

void test_non_palindromes() {
    char s1[] = "Hello";
    char s2[] = "world";
    char s3[] = "abca";
    assert(is_palindrome(s1) == 0);
    assert(is_palindrome(s2) == 0);
    assert(is_palindrome(s3) == 0);
}

void test_edge_cases() {
    char empty[] = "";
    char single[] = "a";
    char single_upper[] = "Z";
    char digits[] = "12321";
    char digits_false[] = "12345";

    assert(is_palindrome(empty) == 1);
    assert(is_palindrome(single) == 1);
    assert(is_palindrome(single_upper) == 1);
    assert(is_palindrome(digits) == 1);
    assert(is_palindrome(digits_false) == 0);
}

int main() {
    test_basic_palindromes();
    test_case_insensitivity();
    test_non_palindromes();
    test_edge_cases();

    printf("All unit tests passed successfully!\n");
    return 0;
}
