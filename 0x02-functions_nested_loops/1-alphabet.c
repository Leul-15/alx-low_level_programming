#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet
 * Return: Nothing.
 */
void print_alphabet(void) {
    char letter = 'a';

    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}
