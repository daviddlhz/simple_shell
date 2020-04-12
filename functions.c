#include "lb_shell.h"
/**
 * _strdup - is a function copy the array in other
 * @str: is the array that is copy
 * Return: the new pointer or array copied.
 */

char *_strdup(char *str)
{
	int i;
	int count;
	char *s;

	count = 1;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	s = malloc(count);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < count + 1; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
/**
 * _strcmp - check the code for Holberton School students.
 * @s1: is the parameter.
 * @s2: is other parameter.
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] >  s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
