#include "main.h"
/**
 *  * print_alphabet - Check description
 *   * Description: It prints the alphabet in lowercase fallowed by a new line
 *    * Return: Nothing.
 */
void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar (letter);
}
_putchar (10);
}
