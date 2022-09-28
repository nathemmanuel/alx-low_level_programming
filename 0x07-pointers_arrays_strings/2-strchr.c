#include "main.h"

/**
 * _strchr - returns a pointer to the first occurence of a
 * character c in the string s, or NULL if said character
 * isn't found
 * @s: The string (one-dimensional array of characters)
 * @c: The \"Nemo\" we're finding
 *
 * Return: A pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	int l;

	for (l = 0; *(s + l) != '\0'; l++)
	{
		if(s[l] == c) 
			/*
			 * s[l] is the same as *(s + l)
			 */
			return (s + l);
	}
	return (0);
	/*
	 * if you\'re wondering why I didn\'t add an else statement
	 * or some else statements, it is because once the compiler
	 * (compiling _strchr in this case) reaches a return function,
	 * it exits the function. so if it reaches any one of those
	 * return functions, no other lines of code will be executed
	 * afterward
	 */
}
