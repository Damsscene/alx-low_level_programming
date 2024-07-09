#include <stdio.h>
/**
 * main - comb5
 * Return: 0
 */
int main(void)
{
	int i, j, k;
	
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			if (j != i)
			{
				for (k = 0; k <= 2; k++)
				{
					if (k != i && k != j)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar('0' + k);

						if (!(i == 2 && j == 1 && k == 0))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
