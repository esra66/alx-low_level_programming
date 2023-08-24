#include "main.h"
/**
 *  * _indexOf - returns boolean if special  character
 *   * @a: character to return
 *    * Return: true or false
 */
int _indexOf(char a)
{
	int x;
	char capArr[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',')', '{', '}'};
	for (x = 0; x < 13; x++)
	{
		if (capArr[x] == a)
			return (1);
	}
	return (0);
}
/**
 *  * cap_string - capitalizes the string
 *   * @s: string
 *    * Return: the string capitalized
 */
char *cap_string(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (_indexOf(s[x]))
			continue;
		if (s[x] >= 'a' && s[x] <= 'z' && (_indexOf(s[x - 1]) || x == 0))
			s[x] = s[x] - 32;
	}
	return (s);
}
