#include <stdio.h>

/**
 * main - Prints the size of variable types.
 *
 * Description: Prints the size of various types on the computer it is
 * compiled and run on. Might have to install the package libc6-dev-i386.
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
