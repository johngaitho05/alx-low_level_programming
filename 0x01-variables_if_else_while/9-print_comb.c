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
for (i = 0; i < 10; i++)
{
j = 0;
while (j < 10)
{
putchar(48 + i);
putchar(48 + j);
putchar(',');
putchar(' ');
++j;
}
}
putchar('\n');
return (0);
}

