#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		_putchar(alphabet[i]);
		i++;
	}
}
