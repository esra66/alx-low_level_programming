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
char upper;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
putchar('\n');
for (upper= 'A'; upper <= 'Z'; upper++)
putchar(upper);
putchar('\n');
return (0);
}
