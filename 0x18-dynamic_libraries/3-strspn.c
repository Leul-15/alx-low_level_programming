#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int n1, n2, f, flag;

	f = 0;

	for (n1 = 0; s[n1] != '\0'; n1++)
	{
		flag = 0;
		for (n2 = 0; accept[n2] != '\0'; n2++)
		{
			if (s[n1] == accept[n2])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
