#include <stdio.h>
/**
 * main - prints all single digit numbers,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
