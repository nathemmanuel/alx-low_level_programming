#include <stdio.h>

/**
 * main - tests the properties of arrays
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a[5];

	/**
	 * An array is a collection of elements of the same data type
	 * dataType name[no. of elements], is how they are declared
	 * When used in an expression, the array name e.g a, acts like a pointer variable
	 * holding the address of the first element, a[0]
	 * But when used with the sizeof() operator and the & operator, 
	 * the array name represents the whole group of elements i.e the array object itself
	 */
	printf("a: %p\n", a);
	printf("&a[0]: %p\n", &a[0]);
	printf("&a: %p\n", &a);
	printf("sizeof(a): %lu\n", sizeof(a));
	return (0);
}
