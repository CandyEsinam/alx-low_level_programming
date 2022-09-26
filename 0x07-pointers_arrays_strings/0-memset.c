#include "main.h"


/**
 * _memset - Fills a memory block with a constant byte
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
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

