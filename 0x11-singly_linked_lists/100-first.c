#include <stdio.h>

/**
  * la_liebre_perdedora - prints before the main function runs using a
  *			  GCC constructor attribute
  */
void la_liebre_perdedora(void) __attribute__((constructor));
void la_liebre_perdedora(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

