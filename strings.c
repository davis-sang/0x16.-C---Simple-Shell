#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}


/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: comparison of two strings
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


/**
 * _strcpy - copies string to another string
 * @dest: string to be copied to
 * @src: string to be copied
 * Return: string copy
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];
	return (dest);
}


/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *           memory, which contains a copy of the string given as a parameter
 * @str: - string to be copied
 * Return: pointer to the duplicated string. Return NULL if insufficient
 *         memory was available to array or if array is NULL
 */

char *_strdup(char *str)
{
	char *dup;

	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	dup = malloc(sizeof(char) * len + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len ; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);

}


/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: concatenated string with overwritten null byte
 */
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
