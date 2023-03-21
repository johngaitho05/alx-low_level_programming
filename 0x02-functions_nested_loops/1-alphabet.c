#include "main.h"
/**
 * main - Entry point
 * Description: prints a-z.
 * Return: 0
 */

int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
char c;
for (c = 'a'; c < 'z'; c++)
{
_putchar(c);
}
}
