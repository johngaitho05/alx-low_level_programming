/**
 * _sqrt_helper - helper function for finding square root of n
 * @n: the number to find square root for
 * @low: the smallest number in the range
 * @high: the largest number in the range
 * Return: square root of n if its a perfect square else -1
 */
int _sqrt_helper(int low, int high, int n)
{
	if (low > high)
	{
		return (-1);
	}
	int mid = low + (high - low) / 2;

	if (mid * mid == n)
	{
		return (mid);
	} else if (mid * mid > n)
	{
		return (_sqrt_helper(low, mid - 1, n));
	}
	return (_sqrt_helper(mid + 1, high, n));

}

/**
 * _sqrt_recursion - Finds the square root of n
 * @n: the number to find square root for
 * Return: square root of n if its a perfect square else -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt_helper(1, n, n));

}
