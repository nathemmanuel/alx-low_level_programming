#include <unistd.h>
#include "main.h"

/**
 * _strstr - checks for the first occurence of string needle
 * @haystack: The string to be checked
 * @needle: The reference string
 *
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	// haystack [0]
	// check needle [0 - 4] in haystack[0]
	// needle
