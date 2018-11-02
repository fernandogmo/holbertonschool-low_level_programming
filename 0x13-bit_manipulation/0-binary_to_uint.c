/**
  * binary_to_uint - converts a binary number to unsigned int
  * @b: const string representing binary number
  * Return: uint decimal value of b, or 0 if it fails
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	while (b && *b)
	{
		n <<= 1;
		if (*b != '1' && *b != '0')
			return (0);
		n |= *b++ - '0';
	}
	return (n);
}
