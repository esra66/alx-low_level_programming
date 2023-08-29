#include <stdlib.h>

/**
 * * _strstr - locates a substring
 * *
 * * @haystack: the longer string to search
 * * @needle: the substring to search for
 * *
 * * Return: a pointer to the beginning of the located substring, or NULL if
 * * the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int k;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (k = 0; needle[k]; k++)
		{
			if (haystack[k] != needle[k])
				break;
		}
		if (k != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
