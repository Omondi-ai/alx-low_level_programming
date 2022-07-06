#include "main.h"
/**
 *_islower - Checks if the character is lower case
 *@c:The character to be checked
 *Return:0 and 1 depending on the conditions
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
