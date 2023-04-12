#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *str_concat - concatenates two strings.
 *
 *@s1: char pointer
 *
 *@s2: char pointer
 *
 *Return: strTemp
 */

char *str_concat(char *s1, char *s2)
{
	int counter1, counter2, x, y;
	char *strTemp;

	counter1 = 0;
	counter2 = 0;

		if (s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}
		while (s1[counter1] != '\0')
		{
			counter1++;
		}
		while (s2[counter2] != '\0')
		{
			counter2++;
		}
		counter2++;
		strTemp = malloc(sizeof(char) * (counter1 + counter2));
		if (strTemp == NULL)
		{
			return (NULL);
		}
		for (x = 0; x < counter1; x++)
		{
			strTemp[x] =  s1[x];
		}

		for (y = 0; y < counter2; y++)
		{
			strTemp[x + y] = s2[y];
		}
		return (strTemp);
}
