
/**
 * _isalpha - checks if character is lowercase or uppercase letter
 *
 * @c: input character tested
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}
