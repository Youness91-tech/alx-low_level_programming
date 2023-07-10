#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int x, cx;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = cx = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[cx] != '\0')
		cx++;
	conct = malloc(sizeof(char) * (x + cx + 1));

	if (conct == NULL)
		return (NULL);
	x = cx = 0;
	while (s1[x] != '\0')
	{
		conct[x] = s1[x];
		x++;
	}

	while (s2[cx] != '\0')
	{
		conct[x] = s2[cx];
		x++, cx++;
	}
	conct[x] = '\0';
	return (conct);
}
