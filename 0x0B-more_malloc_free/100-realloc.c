#include <stdlib.h>

/**
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ret = ptr;
	char *tmp = ret;

	if (!new_size)
		free(ret);

	if (new_size > old_size)
	{
		ret = malloc(new_size);
		if (ret)
			while (old_size--)
				ret[old_size] = tmp[old_size];
		free(tmp);
	}
	return (ret);
}
