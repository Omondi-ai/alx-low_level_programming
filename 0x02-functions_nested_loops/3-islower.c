#include "main.h"
/**
 *_is lower ->this checks if the character is lower case 
 *@c: a character argument
 * return:it returns 0 and 1 depending on the conditions
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
