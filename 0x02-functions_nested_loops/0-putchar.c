#include "main.h"
/**
 * * main - entry poiny
 * * Description: Display putchar ,
 * * Return: Always 0 (successful)
 */
int main(void)
{
char school[10] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(school[i]);
}
_putchar(10);
return (0);
}
