/**
 * is_prime_aux - recursive primality test used by is_prime_number.
 * @n: integer to primality test
 * @i: factor to check
 * Return: integer 1 if prime, 0 otherwise
 */
int is_prime_aux(int n, int i)
{
	if (!(n % i))
		return (0);
	if (i > n / 2)
		return (1);
	return (is_prime_aux(n, ++i));
}


/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 *                   otherwise return 0.
 * @n: integer to primality test.
 * Return: integer 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_aux(n, 2));
}
