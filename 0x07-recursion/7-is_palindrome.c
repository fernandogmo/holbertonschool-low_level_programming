
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
 * _strcpy_recursion - copies src string to dest.
 * @dest: pointer to string.
 * @src: pointer to string.
 * Return: pointer to dest.
 */
char *_strcpy_recursion(char *dest, char *src)
{
	if (!*src)
		return (dest);
	*dest = *src;
	return (_strcpy_recursion(++dest, ++src));
}

/**
 * is_palindrome - returns 1 if the input string is a palindrome,
 *                   otherwise return 0.
 * @s: pointer to string.
 * Return: integer 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	char tmp[42];
	char *p;
	int ret, len = _strlen_recursion(s);

	if (len == 1 || len == 0)
		return (1);
	if (s[0] != s[len - 1])
		return (0);
	p = _strcpy_recursion(tmp, s);
	p[len - 1] = '\0';

	ret = is_palindrome(p + 1);

	return (ret);
}
