/*
 * File: 2-print-alphabrt.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
