#include "main.h"

/**
 * _strncat - Joining two strings with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, *src, n);
	return (dest);
}
