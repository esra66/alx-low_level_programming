#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
/**
 *  * main - Entry point
 *   * Return: Always 1 (Success)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
