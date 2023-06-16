#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main() {
    srand(time(NULL));
    int n = rand();
    int lastDigit = n % 10;
    
    printf("Last digit of %d is ", n);
    
    if (lastDigit > 5) {
        printf("greater than 5\n");
    } else if (lastDigit == 0) {
        printf("0\n");
    } else {
        printf("less than 6 and not 0\n");
    }
    
    printf("\n");
    
    return 0;
}
