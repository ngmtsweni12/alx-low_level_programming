#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints the name
 * @name: given parameter for a name
 * @f: function pointer f
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
