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
/**
 * _strstr - check the code for Holberton School students.
 * @haystack: is the parameter.
 * @needle: is other parameter.
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return (beginning);
		}
		haystack = beginning + 1;
	}
	return (NULL);
}
/**
 * _strcat - check the code for Holberton School students.
 * @dest: is the parameter.
 * @src: is other parameter.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
