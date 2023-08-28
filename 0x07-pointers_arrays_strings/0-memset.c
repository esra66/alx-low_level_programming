#include "main.h"
/**
 * * memset - a function that fills memory with a constant byte.
 * * Description:
 * @*s: char.
 * @b: char.
 * @n: int.
 * * Return: pointer.
 * */


char *_memset(char *s, char b, unsigned int n)
{
	for(int i = 0; i <= n; i++)
		s[i] = b;

	return(s);
}
