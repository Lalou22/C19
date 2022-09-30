/*
 * File: 3-islower.c
 * Auth: Lalo Rdz
 */
#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: Character to be tested.
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
