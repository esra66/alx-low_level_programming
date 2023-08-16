#include "main.h"
/**
 * *_isalpha - controls if a character is alphabetical
 * *@c: character to be verified
 * *Return: return 0 or 1
 */
int _isalpha(int c)
{



	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);



}
