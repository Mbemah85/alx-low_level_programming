#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input
 * Return: the value of n
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTll";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] == s1[j])
		{
			n[i] = s2[j];
		}
	}
	return (n);
}
