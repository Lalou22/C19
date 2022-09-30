/*
 * File: 0-putchar.c
 * Auth: Lalo Rdz
 */
#include "main.h"

/**
 * main - Prints "_putchar", followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[9] = "_putchar\n";
	int i;

	for (i = 0; i <= 8; i++)
		_putchar(c[i]);
	return (0);
}
