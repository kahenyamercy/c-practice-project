
#include <stdio.h>
/**
 * fib - finds the next fibbonacci number in the series
 * @n: number
 * Return: fib series
 */
int fib(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (fib(n - 1) + fib(n - 2));
}
/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int term, i;

	printf("Enter number of terms:");
	scanf("%d", &term);

	for (i = 0; i < term; i++)
	{
		printf("%d", fib(i));
		if (i != (term - 1))
			printf(",");
		else
			printf("\n");
	}
	return (0);
}
