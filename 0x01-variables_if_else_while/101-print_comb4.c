#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
/**
 *  * main - entry point
 *   *
 *    * Description: display triple digits and ,
 *     *
 *      * Return: Always 0 (successful)
 */
int main(void)
{
int a, b, c;
for (a = 0; a < 8; a++)
{
for (b = a + 1; b < 9; b++)
{
for (c = b + 1; c < 10; c++)
{
if (a != b && a != c && b != c)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (a + b + c < 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
