#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: Standard libraries are not allowed.
 * Return: 0
 */

int main(void)

{
	char _putchar[] = "_putchar";
	int i = 0;

	while (_putchar[i] != '\0')

	{
		_putchar(_putchar[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
