#include "main.h"
/**
 * *print_alphabet_x10 - prints alphabet letters
 * * ten times
 * *desc: The function uses loop to operate
 * *Return: no return
 */
void print_alphabet_x10(void)
{
int counter = 0;
int character;
while (counter++ <= 9)
{
for (character = 'a'; character <= 'z'; character++)
_putchar(character);
_putchar(10);
}
}
