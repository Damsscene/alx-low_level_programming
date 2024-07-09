#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: The character to locate in the string.
 * Return: a pointer or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) && *(s + i) != c)
		i++;

	if (*(s + i) == c)
		return (s + i);
	else
	return (NULL);
}
