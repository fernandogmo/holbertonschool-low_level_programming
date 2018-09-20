
/**
 * _isupper - checks for uppercase character
 * @c: input character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	return ((('A' <= c) && ('Z' >= c)) ? 1 : 0);
}
