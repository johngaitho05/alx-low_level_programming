#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Generates a random number and
 * specifies whether the generated
 * number is greater than 5, less than 6 or 0
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int num;
	int counterpart;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					num = i * 1000 + j * 100 + k * 10 + l * 1;
					counterpart = k * 1000 + l * 100 + i * 10 + j * 1;
					if (num < counterpart)
					{
						putchar(48 + i);
						putchar(48 + j);
						putchar(' ');
						putchar(48 + k);
						putchar(48 + l);
						if (!(i == 9 && j == 8 && k == 9 && l == 9))
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

