/**
 * _strstr - locates the first occurrence in the string s of
 *	      any of the bytes in the string accept.
 * @haystack: pointer to a string
 * @needle: pointer to substring
 * Return: pointer to the byte in s that matches one of the bytes
 *         in accept, or NULL if no such byte is found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, begin;
	char *h = haystack, *n = needle;

	for (i = 0; h[i]; i++)
	{
		j = 0;
		if (h[i] == n[j])
		{
			begin = i;
			for (; h[i] && n[j]; i++, j++)
				if (h[i] != n[j])
					break;
			if (n[j] == '\0')
				return (&h[begin]);
		}
	}
	return (!*n ? &h[0] : (char *)0);
}
