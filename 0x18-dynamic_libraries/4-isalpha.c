#include "main.h"

/**
 * _isalpha - checks for characters are alpha or not
 * @c: holds the charactor
 * Return: if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
