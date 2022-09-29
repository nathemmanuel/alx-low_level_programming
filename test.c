#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n;
	int last_digit;
	int declared_first;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("The last digit of %d is ", n);

	if (n % 10 > 5)
		printf("%d and is greater than 5", n % 10);
	else if (n % 10 == 0)
		printf("%d and is equal to 0", n % 10);
	else if (n % 10 < 6 && n % 10 != 0)
		printf("%d and is less than 6 and not 0", n % 10);
	return (0);
}
