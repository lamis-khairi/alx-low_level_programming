#include"main.h"
/**
 * _strcat - function that concatenates two strings
 * @src: source string pointer.
 * @dest: destination string pointer.
 * Return: pointer to destination pointer.
 */
char *_strcat(char *dest, char *src)
{
	int string, j;

	string = 0;
	while (dest[string] != '\0')
	{
		string++;
	}
	for (j = 0; src[j] != '\0'; j++, string++)
	{
		dest[string] = src[j];
	}
	dest[string] = '\0';
		return (dest);
}
