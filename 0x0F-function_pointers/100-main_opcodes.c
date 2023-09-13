#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - check the code for ALX students.
 *   * @argc: argument count.
 *    * @argv: argument vector.
 *      * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int y, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (y = 0; y < nbytes; y++)
	{
		printf("%02x", opc[y] & 0xFF);
		if (y != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
