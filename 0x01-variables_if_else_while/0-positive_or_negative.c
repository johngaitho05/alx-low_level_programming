#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Generates a random number and
 * specifies whether the generated
 * number is positive, negative or zero
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive");
}
else if (n < 0)
{
printf("is negative");
}
else
{
printf("is zero");
}
return (0);
}
