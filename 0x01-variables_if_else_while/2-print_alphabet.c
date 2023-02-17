#include <stdio.h>
/**
 * main - print alphabet in lowercase
 * followed by a newline
 * return: Always 0
 */
int main(void){
	char alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++);
	putchar (alphabets);
	putchar (\n);
}
