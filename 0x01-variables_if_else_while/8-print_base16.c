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
for (x = '0'; x <= '9'; x++)
putchar(x);
for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');
return (0);
}
