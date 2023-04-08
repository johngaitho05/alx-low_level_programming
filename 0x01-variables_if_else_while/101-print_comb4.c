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
	for (i = 0; i < 8; i++)
	{
		j = i + 1;
		for (j = i + 1; j < 10; j++)
		{
			k = j + 1;
			while (k < 10)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
		}
	}
	putchar('\n');
	return (0);
}

