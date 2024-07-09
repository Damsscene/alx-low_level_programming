#include <stdio.h>
/**
 * main - comb5
 * Return: 0
 */
int main(void)
{
	int i, j, k;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = i +1; j <= 9; j++)
		{
			if (j != i)
			{
				for (k = j + 1; k <= 2; k++)
				{
					if (k != i && k != j)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar('0' + k);

						if (!(i == 7 && j == 8 && k == 9))
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
