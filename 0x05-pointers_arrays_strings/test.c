#include <stdio.h>
void modify_my_param(int *m);
/**
 * modify_my_param - set the integer to 402
 * @m: Integer we want to set to 402
 *
 * Return: Nothing
 */

void modify_my_param(int *m)
{
	printf("Value of 'm': %p\n", m);
	printf("Address of 'm': %p\n", &m);
	*m = 402;
}

/**
 * main - how to change the value of a variable from outside the function
 * it is declared in, using a pointer
 *
 * Return: Always 0
 */
int main()
{
	int n, *p;

	p = &n; /* p stores the address of n -- normal pointer logic */
	n = 98; /* p now holds the address to n's house i.e the
		   of the variable in his hands */
	printf("Value of n before the call: %d\n", n); /* n =  98 */
	printf("Address of n: %p\n", &n); /* n's house address 
					     (Yes, the same one p has) */
	printf("Value of p: %p\n", p); /* Proof that p has n's address */
	printf("Address of p: %p\n", &p); /* Now this is p's house 
					     (not talked about very much 
					     but he doesn't live under a bridge yunno) */
	modify_my_param(p); /* Now p gives the address to another pointer, m */
	printf("Value of n after the call: %d\n", n); /* Boom, they change the 
							 person living in the 
							 house to another person --
							 Mr. 402 (sorta unfair actually) */

	return (0);
}
