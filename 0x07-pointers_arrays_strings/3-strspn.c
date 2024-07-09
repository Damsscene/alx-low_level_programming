#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the null-terminated string to be scanned.
 * @accept: Pointer to the null-terminated string containing the characters to match.
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;
	length = 0;

	while (*s)
	{
		char *a;
		*a = accept;
		int match;
		match = 0;

		while (*a)
		{
			if (*s == *a)
			{
				match = 1;
				break;
			}
			a++;
		}

		if (!match)
		{
			break;
		}

		length++;
		s++;
	}
       
	return (length);
}
