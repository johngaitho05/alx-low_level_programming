/**
 * factorial - computes factorial of a number n
 * @n: the number we want to find the factorial for
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
