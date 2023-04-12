#include "main.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory.
 *@str: string.
 *
 *Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int t, u;

	if (str == NULL)
	return (NULL);

	for (t = 0; str[t] != '\0'; t++)
		;

	strout = (char *)malloc(sizeof(char) * (t + 1));

	if (strout == NULL)
		return (NULL);

	for (u = 0; u <= t; u++)
		strout[u] = str[u];

	return (strout);
}
