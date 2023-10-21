#include"main.h"

/**
 * _strncat - function is similar to the _strcat function, except that.
 * it will use at most n bytes from src.
 * @src: source string pointer.
 * @dest: destination string pointer.
 * @n: number of bytes to be concatenates.
 * Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int string, j;

	string = 0;
	while (dest[string] != '\0')
	{
		string++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, string++)
	{
		dest[string] = src[j];
	}
	dest[string] = '\0';
	return (dest);
}
