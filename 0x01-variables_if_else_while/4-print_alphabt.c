#include <stdio.h>

/**
 *main - entry level
 *description do notinclude q e
 *Return: 0
 */

int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}
	putchar('\n');
	return (0);
}
