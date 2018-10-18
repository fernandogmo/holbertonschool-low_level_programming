/**
 * print_name - prints a name with a given function
 * @name: string pointer
 * @f: pointer to a void function that takes a string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
