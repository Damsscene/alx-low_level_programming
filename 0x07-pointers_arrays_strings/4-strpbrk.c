#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence
 *
 * return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
