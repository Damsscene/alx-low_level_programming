#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to the destination memory area where bytes are copied to.
 * @src: Pointer to the source memory area where bytes are copied from.
 * @n: Number of bytes to copy.
 *
 * Return: a pointer to the destination memory area dest.
 */

char *_memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
