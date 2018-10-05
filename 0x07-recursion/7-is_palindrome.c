
/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to a char.
 * Return: integer length of string.
 */
int _strlen_recursion(char *s)
{
	return (!*s ? 0 : 1 + _strlen_recursion(++s));
}


/**
 * is_palindrome - returns 1 if the input integer is a prime number,
 *                   otherwise return 0.
 * @n: integer to primality test.
 * Return: integer 1 if prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	char t;
	int ret, len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	if (s[0] != s[len -1])
		return (0);

	t = s[len - 1];
	s[len - 1] = '\0';

	ret = is_palindrome(s + 1);

	s[len - 1] = t;

	return (ret);
}
