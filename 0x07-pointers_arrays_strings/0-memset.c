#include "main.h"


/**
 * _memset - Fills a memory block with a constant byte
 * @s: A pointer to the memory area to be filled.
 * @b: The char to be used 
 * @n: number of bytes to be used
 * 
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unisigned int n) 
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
