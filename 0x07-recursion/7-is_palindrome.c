
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
 * @i: index where we last read src and write dest.
 * Return: pointer to dest.
 */
char *_strcpy_recursion(char *dest, char *src, int i)
{
	if (!*src)
		return (dest - i);
	*dest = *src;
	return (_strcpy_recursion(++dest, ++src, ++i));
}

/**
 * is_palindrome - returns 1 if the input string is a palindrome,
 *                   otherwise return 0.
 * @s: pointer to string.
 * Return: integer 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	char tmp[9001];
	char *p;
	int len = _strlen_recursion(s);

	if (len == 1 || len == 0)
		return (1);
	if (s[0] != s[len - 1])
		return (0);

	p = _strcpy_recursion(tmp, s, 0);
	p[len - 1] = '\0';

	return (is_palindrome(p + 1));
}
