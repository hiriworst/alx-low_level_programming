#include <stdio.h>
/**
 * main - prints the alphabets in lowercase
 * followed by a newline
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	putchar('\n');
	return (0);
}
