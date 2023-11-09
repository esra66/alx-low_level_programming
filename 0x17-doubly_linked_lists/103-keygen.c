#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * find_max_char - finds the biggest ASCII value in the string
 *    * @username: user's username
 *     * @length: length of the username
 *      * Return: the biggest ASCII value
 */
int find_max_char(char *username, int length)
{
	int max_char;
	int current_char;
	unsigned int rand_num;

	max_char = *username;
	current_char = 0;

	while (current_char < length)
	{
		if (max_char < username[current_char])
			max_char = username[current_char];
		current_char += 1;
	}

	srand(max_char ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 *  * multiply_chars - multiplies each character of the username
 *    * @username: user's username
 *     * @length: length of the username
 *      * Return: multiplied character
 */
int multiply_chars(char *username, int length)
{
	int result;
	int current_char;

	result = current_char = 0;

	while (current_char < length)
	{
		result = result + username[current_char] * username[current_char];
		current_char += 1;
	}

	return (((unsigned int)result ^ 239) & 63);
}

/**
 *  * generate_random_char - generates a random character
 *    * @username: user's username
 *     * Return: a random character
 */
int generate_random_char(char *username)
{
	int random_char;
	int loop_count;

	random_char = loop_count = 0;

	while (loop_count < *username)
	{
		random_char = rand();
		loop_count += 1;
	}

	return (((unsigned int)random_char ^ 229) & 63);
}

/**
 *  * main - Entry point
 *    * @argc: arguments count
 *     * @argv: arguments vector
 *      * Return: Always 0
 *       */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, max_ascii, sum_chars, multiplied_chars, random_char;
	long alphabet[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (length = 0; argv[1][length]; length++)
		;

	keygen[0] = ((char *)alphabet)[(length ^ 59) & 63];
	sum_chars = max_ascii = 0;

	while (max_ascii < length)
	{
		sum_chars = sum_chars + argv[1][max_ascii];
		max_ascii = max_ascii + 1;
	}
	keygen[1] = ((char *)alphabet)[(sum_chars ^ 79) & 63];

	max_ascii = 1;
	sum_chars = 0;
	while (sum_chars < length)
	{
		max_ascii = argv[1][sum_chars] * max_ascii;
		sum_chars = sum_chars + 1;
	}
	keygen[2] = ((char *)alphabet)[(max_ascii ^ 85) & 63];

	keygen[3] = ((char *)alphabet)[find_max_char(argv[1], length)];
	keygen[4] = ((char *)alphabet)[multiply_chars(argv[1], length)];
	keygen[5] = ((char *)alphabet)[generate_random_char(argv[1])];
	keygen[6] = '\0';

	for (max_ascii = 0; keygen[max_ascii]; max_ascii++)
		printf("%c", keygen[max_ascii]);

	return (0);
}

