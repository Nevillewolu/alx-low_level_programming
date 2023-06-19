#include <stdio.h>

/**
 * main - entry point
 * Description - a program that prints the size of various types
 * return: 0 (successful)
 */

int main(void)
{
	char c;
	int d;
	long int ld;
	long long int lld;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(ld));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lld));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
