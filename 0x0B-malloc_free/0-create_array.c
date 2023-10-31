#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c.
 * @size: size of array.
 * @c: char to assign.
 * Description: creat array of size size and assign char c.
 * Return: pointer to array, NULL if fail.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
