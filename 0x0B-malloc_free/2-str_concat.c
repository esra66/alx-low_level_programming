
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - entry point concatenates two strings
 * @s1: char to initialize the array c
 * @s2: char to initialize the array c
 * Return: pointer to the array (Success), NULL (Error)
 *
 */

char *str_concat(char *s1, char *s2)
{
char *ar;
int i;
int x;
int size1;
int size2;
int j;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
for (x = 0; s1[x] != '\0'; x++)
{
}
size1 = x;
for (x = 0; s2[x] != '\0'; x++)
{
}
size2 = x;
ar = malloc(sizeof(char) * (size1 + size2 + 1));
if (ar == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
	ar[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
ar[i] = s2[j];
i++;
}
ar[i] = '\0';
return (ar);
}
