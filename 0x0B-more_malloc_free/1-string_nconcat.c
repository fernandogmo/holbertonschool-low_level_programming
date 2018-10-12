#include <stdlib.h>

/**
 * string_nconcat - appends n bytes of one string to another
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: number of bytes of s2 to append to s1
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1;
	char *ret;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	ret = malloc(sizeof(*ret) * (len1 + n + 1));
	if (ret)
	{
		ret[len1 + n] = '\0';
		while (n--)
			ret[len1 + n] = s2[n];
		while (len1--)
			ret[len1] = s1[len1];
	}
	return (ret);
}
