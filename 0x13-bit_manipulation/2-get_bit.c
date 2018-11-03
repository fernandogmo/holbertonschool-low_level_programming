/**
  * get_bit - returns value of bit at given index
  * @n: long uint whose bit we want
  * @index: uint position of bit
  * Return: int value of bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_idx = sizeof(n) * 8 - 1;

	if (index > max_idx)
		return (-1);

	n >>= index;
	return (n & 1);
}

