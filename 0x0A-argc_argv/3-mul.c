#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - Prints the multiplication of two numbers, followed by a new line.
 *   * @argc: The number of arguments supplied to the program.
 *    * @argv: An array of pointers to the arguments.
 *     *
 *      * Return: If the program receives two arguments - 0.
 *       *         If the program does not receive two arguments - 1.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int x, y, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);

	return (0);
}
