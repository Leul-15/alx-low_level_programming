#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main() {
    srand(time(0));
    int n = rand() - RAND_MAX / 2;
    int lastDigit = n % 10;


    if (lastDigit > 5) {

        printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);

    } else if ((lastDigit < 6) && (lastDigit != 0))
        {

                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);


    } else
        {

                printf("Last digit of %d is %d and is 0\n", n, lastDigit);

        }



    return 0;
}