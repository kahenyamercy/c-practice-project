#include <stdio.h>
/**
 * fact - finds the factorial of a given number
 * @n: the number to be factorised
 * Return: the factorial of a number
 */
int fact(int n)
{
	if (n == 1)
		return (1);
	else
		return (n * fact(n - 1));
}

/**
 * main - starting point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	printf("Enter a number:");
	scanf("%d", &n);

	printf("factorial of %d is %d\n", n, fact(n));

	return (0);
}
