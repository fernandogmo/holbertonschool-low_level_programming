/**
  * set_bit - sets bit to 1 at given index
  * @n: pointer to long uint whose bit we want to set
  * @index: uint position of bit
  * Return: 1 on success, or -1 on failure
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1, max_idx = sizeof(n) * 8 - 1;

	if (index > max_idx)
		return (-1);

	mask <<= index;
	*n |= mask;
	return (1);
}

