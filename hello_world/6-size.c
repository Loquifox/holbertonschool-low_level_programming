#include <stdio.h>
#include <string.h>
/**
 * main - void
 *
 * Description: printf in c
 *
 * Return: 0
 */

int main()
{
	int a;
	float b;
	long long int c;
	char d;
	long int e;

	printf("Size of a char: %zu byte(s)", sizeof(d));
	printf("Size of an int: %zu byte(s)", sizeof(a));
	printf("Size of a long int: %zu byte(s)", sizeof(e));
	printf("Size of a long long int: %zu byte(s)", sizeof(c));
	printf("Size of a float: %zu byte(s)", sizeof(b));

	return 0;
}

