#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to be searched.
 * @e: The character to locate in the string.
 * Return: a pointer or NULL if the character is not found.
 */
char *_strchr(char *s, char e)
{
	while (*s != '\0')
	{
		if (*s == e)
		{
			return (s);
		}
		s++;
	}
	if (e == '\0')
	{
		return (s);
	}
	return (NULL);
}
