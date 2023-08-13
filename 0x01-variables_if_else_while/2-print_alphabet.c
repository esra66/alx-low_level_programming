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
for (int x = 'A'; x <= 'z'; x++) 
{
x = tolower(x);
putchar(x);
}
return (0);
}
