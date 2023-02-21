#include "main.h"
/**
 * main - print _putchar follwed by a newline
 *
 * Return: Always 0
 */

int main(void)
{
	char ch[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		putchar(ch[c]);

	}

	putchar ("\n");

	return (0);

}
