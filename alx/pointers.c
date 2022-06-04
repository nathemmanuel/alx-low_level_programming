#include <stdio.h>
void modify_my_param(int *m); // don't forget to include a function prototype

int main()
{
	char c;
	int n;
	// int *ptr;
	char *pointer;

	// the pointer is now a normal variable; when you call 'pointer'

	/*
	 * Remember that & is the address operator - It is the address of a variable in memory
	 * Pointers are variables whose values are addresses. 
	 * dataType *var1 = &var2 (var1 and var2 are arbitrary names and the variable must of
	 * course be declared before it's address is assigned to the pointer)
	 * With printf, %lu is for sizeof() and %p is for pointer
	 * The data type of the pointer and the variable it is pointing to must be the same
	 */
	pointer = &c;
	n = 98;
	// ptr = &n;
	printf("pointer address: %p\n", pointer);









	printf("Address of variable 'n': %p\n", &n);
	printf("The size of integer 'n' on my device is: %lu\n", sizeof(n));
	printf("The size of an integer pointer on my device is: %lu\n", sizeof(ptr));
	printf("Value of 'ptr': %p\n", ptr);
	printf("\n");

	*ptr = 402;
	printf("ptr points to n, now n is: %d\n", n);
	printf("Value of n before the call: %d\n", n);
	printf("Value of 'ptr': %p\n", ptr);
	printf("Address of 'ptr': %p\n", &ptr);
	modify_my_param(ptr);
	printf("Value of 'n' after the call: %d\n", n);
	printf("Value of '*ptr' after the call: %d\n", *ptr);
	/*
	 * pointers can manipulate VALUES stored at the address they point to
	 * For this, we use the dereference operator (*), *var
	 */
	return (0);
}

/**
 * modify_my_param - modifies the value of n
 * @m: Will point to n and change it
 *
 * Return: Nothing
 */
void modify_my_param(int *m)
{
	printf("Value of 'm': %p\n", m);
	printf("Address of 'm': %p\n", &m);
	*m = 300;
}
