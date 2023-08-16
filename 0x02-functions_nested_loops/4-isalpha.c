#include "main.h"
/**
 * *_isalpha - controls if a character is alphabetical
 * *@c: character to be verified
 * *Return: return 0 or 1
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
