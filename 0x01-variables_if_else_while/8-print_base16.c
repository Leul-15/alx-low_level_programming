#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main() {
    int number;
    char digit;

    for (number = '0'; number <= '9'; number++) {
        putchar(number);
    }

    for (digit = 'a'; digit <= 'f'; digit++) {
        putchar(digit);
    }

    putchar('\n');

    return 0;
}
