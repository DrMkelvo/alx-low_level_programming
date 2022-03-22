#include "main.h"
/**
 * main -header file to check our functions
 *swap_int - function that swaps the values of two integers.
 * @a: first num
 * @b: second num
 * no return 0
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b =c;
}
