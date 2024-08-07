#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: The character to locate in the string.
 * Return: a pointer or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
