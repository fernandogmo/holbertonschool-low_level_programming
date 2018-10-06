/**
 * wildcmp - matches two strings, allowing for globbing
 *	     with wildcard '*'.
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: integer 1 if s1 and s2 match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && !(*s2))
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return ((wildcmp(s1, s2 + 1)) || (wildcmp(s1 + 1, s2)));
	return (0);
}
