#include "main.h"
/**
 * reset_to_98 - function that takes a pointer to an int as parameter and
 * updates the value it points to to 98.
 *
 * @n: This is the entry
 */
void reset_to_98(int *n)
{
	int n = 98;
	int *p = &n;
	*p = 402;
	printf("%d\n',*p);
}
return(0);
