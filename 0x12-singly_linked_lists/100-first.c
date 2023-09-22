#include"lists.h"
/**
 *  * mainn - prints a string before the main function is executed
 */
__attribute__ ((constructor))
void mainn(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
