#include <stdio.h>
/**
 * prime_num - checks if a number is prime
 * @num: number
 * Return: 0 if true 1 false
 */
int prime_num(int num)
{
	int i;

	if (i == num)
		return (0);
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			return (0);
	}
	return (1);
}
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	printf("Enter a number:");
	scanf("%d", &n);

	if (prime_num(n))
		printf("%d is prime\n", n);
	else
		printf("%d is not a prime\n", n);
	return (0);
}
