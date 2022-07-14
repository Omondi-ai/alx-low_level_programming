#include "main.h"

/**
 * _strcmp - compare
 * @s1: pointer to char params
 * @s2: pointer to char params
 * Return: *dest
 */

int _strcmp(char *s1, charn *s2)
{
	int i;
	int R;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];

	return (R);
}
