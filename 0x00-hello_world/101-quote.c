#include <stdio.h>

/**
 *main - prints to string
 *Description: Prints "and that piece of art is useful.." without puts
 *Return: 1
 */

int main(void)
{
	write(STDOUT_FILENO, "and that piece of art  i
			s useful \" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
