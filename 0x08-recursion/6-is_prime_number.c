/**
 * _sqrt_helper - finds the natural square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (i);
	if (i * i == n)
		return (i);
	return (_sqrt_helper(n, i + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 0));
}

/**
 * _prime_helper - checks whether number is prime
 * @n: number to check
 * @i: number to divide by
 * Return: 1 if prime else 0
 */
int _prime_helper(int n, int i)
{
	int upper_bound = _sqrt_recursion(n);

	if (i > upper_bound)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if number is prime or not
 * @n: the number to check
 * Return:  1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (_prime_helper(n, 2));

}
