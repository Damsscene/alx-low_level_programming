#include "main.h"
#include <stdio.h>
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the null-terminated string to be scanned.
 * @accept: Pointer to the null-terminated string containing the characters to match.
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0; // Initialize length to 0

	while (*s)
	{
		char *a = accept; // Reset the accept pointer for each character in s
		int match = 0; // Flag to check if a character from s is found in accept

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
