#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
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

void print_alphabet_x10(void)
{
	for (int j = 0; j < 10; j++)
    {
	    print_alphabet();
    }
}
