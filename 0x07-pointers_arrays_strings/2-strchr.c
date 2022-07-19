#include "main.h"
/**
 * _strchr - Returns pointer to occurence 1
 * of the character c in the string s, or NULL if the
 * character is not found
 *
 * @s: string targeted
 * @c: character targeted
 *
 * Return: return pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
