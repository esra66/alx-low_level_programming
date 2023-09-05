#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer,
 * @str: char to initialize the array c
 * Return: pointer to the array (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *ar;
int size;
int i;

if (str == NULL)
{
	return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
}
size = i;
ar = malloc(sizeof(str) * size);
if (ar == 0)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
ar[i] = str[i];
}
ar[i] = '\0';
return (ar);
}
