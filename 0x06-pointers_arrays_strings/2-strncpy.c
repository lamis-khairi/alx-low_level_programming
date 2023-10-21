#include"main.h"

/**
 * _strncpy - function that copies a string.
 * @src: source string.
 * @dest: destination string.
 * @n: maximum number of bytes to be copied.
 * Return: pointer to destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int bytes = 0;

	for (bytes = 0; bytes < n && src[bytes] != '\0'; bytes++)
		dest[bytes] = src[bytes];

	for ( ; bytes < n; bytes++)
		dest[bytes] = '\0';

	return (dest);
}
