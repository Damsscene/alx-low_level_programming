#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints the specified message to standard error
 * Return: Always 1 (Error)
 */
int main(void)
{
char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, m, 59);
return (1);
}
