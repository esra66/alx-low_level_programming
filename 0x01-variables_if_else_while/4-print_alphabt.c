#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 */
int main(void)
{
char low;
char e;
char q;
e = 'e';
q = 'q';
for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
putchar(low);
}
putchar('\n');
return (0);
}
