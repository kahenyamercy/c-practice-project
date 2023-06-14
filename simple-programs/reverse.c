#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n, rev = 0, rem, m;

	printf("Enter a number:");
	scanf("%d", &n);

	m = n;

	while (m > 0)
	{
		rem = m % 10;
		m = m / 10;
		rev = rev * 10 + rem;
	}
	printf("Reverse of %d is %d\n", n, rev);

	return (0);
}
