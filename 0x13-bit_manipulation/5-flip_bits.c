/**
  * flip_bits - returns the number of bits that must be flipped
  *		to get from one number to the another
  * @n: long uint source
  * @m: long uint destination
  * Return: uint count of bits flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
