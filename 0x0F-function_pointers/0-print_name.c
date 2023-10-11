/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to print with
 * Return: Nothing.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
