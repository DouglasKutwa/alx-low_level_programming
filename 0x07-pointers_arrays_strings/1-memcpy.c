#include "main.h"

/**
 * *_memcpy - entry point
 * @dest: memory area
 * @src: source
 * @n: length of src
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
