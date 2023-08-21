#include <stdio.h>

/**
 * add - Function to add two integers
 * @a: num1
 * @b: num2
 * Return: a + b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Function to subtract two integers
 * @a: num1
 * @b: num2
 * Return: a - b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Function to multiply two integers
 * @a: num1
 * @b: num2
 * Return: a * b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Function to divide two integers
 * @a: num1
 * @b: num2
 * Return: a / b
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error: Division by zero\n");
		return (0);
	}
}

/**
 * mod - Function to calculate the remainder
 * @a: num1
 * @b: num2
 * Return: a % b
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error: Division by zero\n");
		return (0);
	}
}
