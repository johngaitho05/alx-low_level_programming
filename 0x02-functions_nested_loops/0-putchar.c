#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: prints _putchar.
 * Return: 0
 */
int main(void)
{
int i;
char word[10] = "_putchar";
for (i = 0; i < strlen(word); i++)
{
_putchar(word[i]);
}
putchar('\n');
return (0);
}

