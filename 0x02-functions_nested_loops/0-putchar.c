#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: Standard libraries are not allowed.
 * Return: 0
 */

int main(void)

{
	char putch[] = "_putchar";
	int i = 0;

	while (putch[i] != '\0')

	{
		_putchar(putch[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
