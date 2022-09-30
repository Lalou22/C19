/*
 * File: 6-print_numberz.c
 * Auth: Lalo Rdz
 */
#include <stdio.h>
/**
 * main - Write a program that prints all single digit numbers of base 10
 *
 * Description: prints all single digit numbers of base 10 starting from 0.
 * Not allowed to use any variable of type char. Only use putchar twice in
 * your code. All your code should be in the main functio.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
