#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the size of various types on
 * the computer it is compiled and run on,
 * Return: 0
 */
int main(void)
{
printf("Size of a char %lo byte(s)\n", sizeof(char));
printf("Size of a int %lo byte(s)\n", sizeof(int));
printf("Size of a long int %lo byte(s)\n", sizeof(long int));
printf("Size of a long long %lo byte(s)\n", sizeof(long long int));
printf("Size of a float %lo byte(s)\n", sizeof(float));
return (0);
}

